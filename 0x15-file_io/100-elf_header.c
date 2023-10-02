#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

#define BUF_SIZE 64

void display_elf_header(Elf64_Ehdr *header)
Void print_data(unsigned char *e_ident)
Void print_class(unsigned char *e_ident)
void print_version(unsigned char *e_ident)
void print_abi(unsigned char *e_ident)
void error_exit(const char *msg)


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
Int i;
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
}

/**
 * print_class - Entry of program
 * Description: Prints the class of ELF header.
 * @e_ident: A pointer containing the ELF class.
 */
Void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("Invalid\n");
}
}
/**
 * print_data - Entry of program
 * Description: Prints the data of ELF
 * @e_ident: A pointer containing the ELF class.
 */
Void print_data(unsigned char *e_ident)
{
printf("  Data:                              ");
switch (header->e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little-endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big-endian\n");
break;
default:
printf("Invalid\n");
}
}
/**
 * print_version - Entry of program
 * Description: Prints a version of an ELF
 * @e_ident: A pointer containing the ELF version.
 */

void print_version(unsigned char *e_ident)
{
printf("  Version:        %d (current)\n", header->e_ident[EI_VERSION]);

printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
default:
printf("Other\n");
}
}
/**
 * print_abi - Entry of program
 * Description: prints a version of ELF header.
 * @e_ident: A pointer containing the ELF ABI version.
 */
void print_abi(unsigned char *e_ident)
{
printf("  ABI Version:       %d\n", header->e_ident[EI_ABIVERSION]);

printf("  Type:                              ");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (No file type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("Other\n");
break;
}


printf("  Entry point address:    0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry of program
 * Descriptin: Displays the content the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
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
