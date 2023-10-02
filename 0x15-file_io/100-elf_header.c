#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

#define BUF_SIZE 64

void display_elf_header(Elf64_Ehdr *header);
void print_data(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void error_exit(const char *msg);

/**
 * error_exit - Entry of Program
 * Description: Print an error message to stderr and exit with a status code.
 * @msg: The error message to display.
 */
void error_exit(const char *msg)
{
fprintf(stderr, "Error: %s\n", msg);
exit(98);
}

/**
 * display_elf_header - Entry of program
 * Description: Display information from the ELF header.
 * @header: Pointer to the ELF header.
 */
void display_elf_header(Elf64_Ehdr *header)
{
int i;

printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x", header->e_ident[i]);
if (i < EI_NIDENT - 1)
printf(" ");
else
printf("\n");
}

print_class(header->e_ident);
print_data(header->e_ident);
print_version(header->e_ident);
print_abi(header->e_ident);
print_entry(header->e_entry, header->e_ident);
}

/**
 * print_class - Entry of program
 * Description: Prints the class of ELF header.
 * @e_ident: A pointer containing the ELF class.
 */
void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");
switch (e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
break;
}
}

/**
 * print_data - Entry of program
 * Description: Prints the data of ELF
 * @e_ident: A pointer containing the ELF class.
 */
void print_data(unsigned char *e_ident)
{
printf("  Data:                              ");
switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little-endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big-endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_DATA]);
break;
}
}

/**
 * print_version - Entry of program
 * Description: Prints a version of an ELF
 * @e_ident: A pointer containing the ELF version.
 *
 */
void print_version(unsigned char *e_ident)
{
printf("  Version:        %d (current)\n", e_ident[EI_VERSION]);
}

/**
 * print_abi - Entry of program
 * Description: prints a version of ELF header.
 * @e_ident: A pointer containing the ELF ABI version.
 */
void print_abi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
switch (e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
break;
}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf(" Entry point address: ");
if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}

if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);
else
printf("%#lx\n", e_entry);
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;
ssize_t n;

if (argc != 2)
error_exit("Usage: elf_header elf_filename");

fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_exit(strerror(errno));

n = read(fd, &header, sizeof(header));
if (n == -1)
error_exit(strerror(errno));

if (n != sizeof(header) || memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
error_exit("Not an ELF file");

printf("ELF Header:\n");
display_elf_header(&header);

close(fd);

return (0);
}
