*This project has been created as part of the 42 curriculum by emiarik*

# 42 Libft Project

## Açıklama
Bu proje 42 Kocaeli okulu ana eğitim programı kapsamında hazırlanmış olup, okulun ilk projesidir. Proje içerisinde C dili ile kendi kütüphane projemizi geliştirmiş durumdayız.

## Libft ile ne yapılabilir?
Libft kendi kişisel kütüphanemizdir. Kütüphane içerisinde dynamic veri yönetimi, temel string manipülasyonları ve kontrolleri, Linked List yönetimi ve FD Write fonksiyonları ile dosya yönetimi işlemlerini gerçekleştirebilmekteyiz. 

## İçerideki fonksiyonlar

### Part 1 - Libc Fonksiyonları
*   `ft_isalpha`
*   `ft_isdigit`
*   `ft_isalnum`
*   `ft_isascii`
*   `ft_isprint`
*   `ft_strlen`
*   `ft_memset`
*   `ft_bzero`
*   `ft_memcpy`
*   `ft_memmove`
*   `ft_strlcpy`
*   `ft_strlcat`
*   `ft_toupper`
*   `ft_tolower`
*   `ft_strchr`
*   `ft_strrchr`
*   `ft_strncmp`
*   `ft_memchr`
*   `ft_memcmp`
*   `ft_strnstr`
*   `ft_atoi`
*   `ft_calloc`
*   `ft_strdup`

### Part 2 - Ek Fonksiyonlar
*   `ft_substr`
*   `ft_strjoin`
*   `ft_strtrim`
*   `ft_split`
*   `ft_lstnew`
*   `ft_lstclear`
*   `ft_lstadd_back`
*   `ft_lstadd_front`
*   `ft_lstdelone`
*   `ft_lstiter`
*   `ft_lstlast`
*   `ft_lstmap`
*   `ft_lstsize`
*   `ft_putchar_fd`
*   `ft_putendl_fd`
*   `ft_putnbr_fd`
*   `ft_putstr_fd`

## Nasıl kullanabilirsiniz?
Libft kütüphanesini kullanabilmek için aşağıdaki adımları takip edebilirsiniz.

1.  Repo'yu clone edin.
    ```bash
    git clone https://github.com/EminTalhaArik/42-libft.git
    cd 42-libft
    ```
2.  Kütüphaneyi derleiyn:
    ```bash
    make
    ```
    Bu işlemin ardından sistem size otomatik olarak `libft.a` dosyasını oluşturacak.

3.  Bu işlemin ardından kütüphanede yer alan fonksiyonlardan bir tanesini kullanmak istediğiniz C dosyası içerisinde `libft.h` include edebilirsiniz. Bu dosyaları derleme işlemi esnasında `libft.a` ile linkleyerek derleyebilirsiniz:
    ```bash
    gcc -Wall -Wextra -Werror your_program.c libft.a -o your_program
    ```

## Yazar
[Emin](https://github.com/EminTalhaArik)

## Kaynakça

Projeyi geliştirme sürecimde bazı konuları netleştirebilmek için yapay zekadan destek aldım. Bu süreçte Gemini AI ile muhabbetimizi samimi bir noktaya getirdim. Bu süreçte link olarak daha sonrasında ulaşamadığım bir çok kaynağa geeksforgeeks web sayfası üzerinden eriştim.

*   `https://www.cs.cornell.edu/courses/cs3410/2024fa/rsrc/c/header.html`
*   `https://medium.com/@beingnile/stack-and-heap-25ada76c1b61`
*   `https://www.geeksforgeeks.org/c/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/`
*   `https://www.geeksforgeeks.org/c/linked-list-in-c/`
