/*
** EPITECH PROJECT, 2026
** cat.c
** File description:
** day12
*/

#include <unistd.h>
#include <fcntl.h>

int read_memory(int fd)
{
    char buffer = [4096];
    ssize_t = bytes_read;

    bytes_read = read(fd, buffer, sizeof(buffer));
    while (bytes_read > 0) {
        write(1, buffer, bytes_read);
        
    }
    if(bytes_read < 0) {
        return 84;
    }
}

int main(void)
{
    
}

READ = fonction

   READ lire ->  FICHIER


    read retourner un nombre

    0 > 1 = fichier qui exite ou on à les permissions
    0 = on à juste fait cat
    -1 = cat tromper 
