/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:19:25 by aaslan            #+#    #+#             */
/*   Updated: 2022/06/04 16:10:08 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/**
 * @brief Verilen parametrenin harf olup olmadığına bakar.
 *
 * @param c Kontrol edilecek parametre
 * @return int ==> 1 (true) veya 0 (false)
 */
int		ft_isalpha(int c);

/**
 * @brief Verilen parametrenin rakam olup olmadığına bakar.
 *
 * @param c Kontrol edilecek parametre
 * @return int ==> 1 (true) veya 0 (false)
 */
int		ft_isdigit(int c);

/**
 * @brief Verilen parametrenin Alfanümerik (harf veya rakam)
 * olup olmadığına bakar.
 *
 * @param c Kontrol edilecek parametre
 * @return int ==> 1 (true) veya 0 (false)
 */
int		ft_isalnum(int c);

/**
 * @brief Verilen parametrenin ASCII tablosunda
 * (0 <= c <= 127) olup olmadığına bakar.
 *
 * @param c Kontrol edilecek parametre
 * @return int ==> 1 (true) veya 0 (false)
 */
int		ft_isascii(int c);

/**
 * @brief Verilen parametrenin ASCII tablosunda Printable
 * (32 <= c <= 126) olup olmadığına bakar.
 *
 * @param c Kontrol edilecek parametre
 * @return int ==> 1 (true) veya 0 (false)
 */
int		ft_isprint(int c);

/**
 * @brief Verilen string'in karakter sayısını hesaplar ve döndürür.
 *
 * @param s String parametre
 * @return size_t ==> string'in karakter sayısı
 */
size_t	ft_strlen(const char *s);

/**
 * @brief s pointer'ının gösterdiği adresi,
 * n byte kadar c parametresi ile doldurur.
 *
 * @param s Doldurulacak pointer
 * @param c Doldurma işleminde kullanılacak karakter
 * @param n Doldurulacak byte boyutu
 * @return void* ==> s pointer'ının kendisi
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief s pointer'ının gösterdiği adresi,
 * n byte kadar '\0' karakteri ile doldurur.
 *
 * @param s Doldurulacak pointer
 * @param n Doldurulacak Byte boyutu
 * @return void* ==> s pointer'ının kendisi
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief src pointer'ının ilk n byte'ını dest pointer'ına kopyalar.
 *
 * @param dest Byte'ların kopyalanacağı pointer
 * @param src Byte'ların alınacağı pointer
 * @param n Kopyalanacak byte boyutu
 * @return void* ==> dest pointer'ının kendisi
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief src pointer'ının ilk n byte'ını dest pointer'ına kopyalar ve
 * kopyalama yaparken overlap durumuna dikkat eder.
 *
 * memcpy fonksiyonu ile aynı işi yapsada daha güvenlidir ve tercih edilmelidir.
 *
 * @param dest Byte'ların kopyalanacağı pointer
 * @param src Byte'ların alınacağı pointer
 * @param n Kopyalanacak byte boyutu
 * @return void* ==> dest pointer'ının kendisi
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief src pointer'ının (n - 1) adet karakterini dest pointer'ına kopyalar.
 * n. karakter için dest pointer'ının sonuna '\0' karakterini koyar.
 *
 * @param dest Karakterlerin kopyalanacağı pointer
 * @param src Karakterlerin alınacağı pointer
 * @param n Kopyalanacak karakter sayısı
 * @return size_t ==> src pointer'ının karakter sayısı
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t n);

/**
 * @brief dst pointer'ının sonuna src pointer'ından karakterler ekler.
 *
 * Eğer dstsize <= strlen(dst) ise hiçbir karakter eklemez ve
 * geriye dstsize + strlen(src) döner.
 *
 * Eğer dstsize > strlen(dst) ise src pointer'ından
 * (dstsize - strlen(dst) - 1) kadar karakteri dst pointer'ına ekler.
 * Daha sonra dst pointer'ının sonuna '\0' karakterini koyar.
 * Geriye strlen(dsc) + strlen(src) döner.
 *
 * @param dst Karakterlerin ekleneceği pointer
 * @param src Karakterlerin alınacağı pointer
 * @param dstsize dst'nin olması gereken karakter sayısı
 * @return size_t ==> dstsize + strlen(src) veya strlen(dsc) + strlen(src)
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief Verilen küçük harfi büyük harfe çevirir ve geriye döner.
 *
 * Eğer verilen parametre küçük harf değilse
 * hiçbir şey yapmadan verilen parametreyi geriye döner.
 *
 * @param c Büyük harfe çevilecek olan küçük harf
 * @return int ==> Büyük harf'e çevrilen parametrenin ASCII değeri
 */
int		ft_toupper(int c);

/**
 * @brief Verilen büyük harfi küçük harfe çevirir ve geriye döner.
 *
 * Eğer verilen parametre büyük harf değilse
 * hiçbir şey yapmadan verilen parametreyi geriye döner.
 *
 * @param c Küçük harfe çevilecek olan büyük harf
 * @return int ==> Küçük harf'e çevrilen parametrenin ASCII değeri
 */
int		ft_tolower(int c);

/**
 * @brief s pointer'ı içerisinde c parametresiyle gelen karakteri arar.
 * Karakteri bulduğunda geriye karakterin adresini döner.
 *
 * Eğer c parametresi ile gelen karakter '\0' ise
 * s'nin son index adresini geriye döner.
 * Eğer karakter bulunamazsa NULL döner.
 *
 * @param s Karakterin aranacağı pointer
 * @param c Aranan karakter
 * @return char* ==> s pointer'ı içerisinde ki c'nin adresi
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief s pointer'ı içerisinde c parametresiyle gelen karakteri arar.
 * Aramayı tersten yani sondan başa doğru yapar.
 * Karakteri bulduğunda geriye karakterin adresini döner.
 *
 * Eğer karakter bulunamazsa NULL döner.
 *
 * @param s Karakterin aranacağı pointer
 * @param c Aranan karakter
 * @return char* ==> s pointer'ı içerisinde ki c'nin adresi
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief s1 ve s2'nin ilk n kadar karakterlerini karşılaştırır.
 * İlk farklı karakterleri bulduğunda karakterlerin
 * ASCII tablosuna göre farkını geriye döner.
 *
 * Eğer herhangi bir fark yoksa geriye 0 döner.
 *
 * @param s1 İlk pointer
 * @param s2 İkinci pointer
 * @param n Karakter sayısı
 * @return int ==> s1 ve s2 pointer'larının karakterleri arasında ki fark
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief s pointer'ının n byte'ında c parametresiyle gelen karakteri arar.
 * Karakteri bulduğunda geriye karakterin adresini döner.
 *
 * Eğer karakter bulunamazsa NULL döner.
 *
 * @param s Karakterin aranacağı pointer
 * @param c Aranacak karakter
 * @param n Aramanın yapılacağı byte boyutu
 * @return void* ==> s pointer'ı içerisinde ki c'nin adresi
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief s1 ve s2'nin ilk n byte'lık bölümlerini (karakterlerini) karşılaştırır.
 * İlk farklı byte'ı (karakter) bulduğunda
 * s1 - s2 ile aralarında ki byte (karakter) farkını geriye döner.
 *
 * Eğer herhangi bir fark yoksa geriye 0 döner.
 *
 * @param s1 İlk pointer
 * @param s2 İkinci pointer
 * @param n Karakter sayısı
 * @return int ==> s1 ve s2 pointer'larının karakterleri arasında ki fark
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief s1 string'inin ilk n byte'ında (karakterinde) s2 string'ini arar.
 * s2 bulunduğunda s2 string'in başladığı adresi geriye döner.
 *
 * Eğer s2 '\0' karakteri ise s1 string'ini geriye döner.
 * Eğer s2 yoksa NULL döner.
 *
 * @param s1 Arama yapılacak string
 * @param s2 Aranacak string
 * @param n Aranacak byte (karakter) boyutu
 * @return char* ==> s1 içerisinde ki s2 string'inin başladığı adres
 */
char	*ft_strnstr(const char *s1, const char *s2, size_t n);

/**
 * @brief Verilen string'i intager'a çevirir ve geriye döner.
 *
 * String'e en başından itibaren tek tek karakter olarak bakar.
 * Karakter ASCII tablosuna göre 9 <= char <= 13 ise veya boşluksa hepsini atlar.
 * Rakamdan önce 1 tane + varsa sorun yok, 1 tane - varsa sayıyı negatif yapar.
 * Rakamdan önce 1 den fazla + veya - işareti varsa 0 döner.
 * Rakamdan önce harf varsa 0 döner.
 * Sayı, ilk rakam ile başlar ve rakam dışında ki bir karaktere kadar devam eder.
 * Rakam dışında bir şey ile karşılaşana kadar bulduğu sayıyı geriye döner.
 *
 * @param nptr Intager'a çevilecek olan string
 * @return int ==> Elde edilen intager değer
 */
int		ft_atoi(const char *nptr);

/**
 * @brief Yeni bir bellek bloğu oluşturur ve
 * belleğin tamamını '\0' karakteri ile doldurur.
 * Oluşturulacak bellek boyutunu verilen parametreler belirler. (nmemb * size)
 *
 * @param nmemb Eleman sayısı
 * @param size Her bir elemanın byte boyutu
 * @return void* ==> Oluşturulan bellek bloğunun başlangıç adresini tutan pointer
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief Verilen string'in kopyasını oluşturur ve
 * yeni oluşturulan string'i geriye döner.
 *
 * @param s Kopyalanacak string
 * @return char* ==> Yeni oluşturulan kopya string
 */
char	*ft_strdup(const char *s);

/**
 * @brief s string'inin start ile belirtilen index'inden başlayarak
 * len ile belirtilen sayı kadar karakteri alır ve
 * yeni bir string oluşturup geriye döner.
 *
 * Eğer s NULL ise geriye NULL döner.
 * Eğer start index'i s'in son index'inden büyük ise geriye boş string döner.
 * Eğer start index'inden itibaren olan karakterlerin sayısı,
 * len ile belirtilen sayıdan az ise alabildiği kadar karakteri alır ve
 * sonuna '\0' koyarak yeni string'i geriye döner.
 *
 * @param s Karakter alınacak string
 * @param start Oluşturulacak olan string'in başlayacağı s index'i
 * @param len s string'inden alınacak karakter sayısı
 * @return char*
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief s1 ve s2 string'lerinin birleşmesinden oluşan
 * yeni bir string üretir ve geriye döner.
 * Yeni string'e önce s1 string'ini, sonra s2 string'ini kopyalar.
 * Ayrıca son karakter olarak '\0' koyar.
 *
 * @param s1 İlk string
 * @param s2 İlk string'in sonuna eklenecek ikinci string
 * @return char* => Yeni üretilen string
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief String ifadenin başına ve sonuna bakar,
 * set içerisinde ki karakterleri arar.
 * Eğer set içerisinde ki karakterlerden birini bulursa onu siler.
 * En baştaki veya en sondaki karakter set içerisinde yoksa hiçbir şey silinmez.
 * Set içerisinde karakterlerin sıralaması önemli değildir, varsa silinirler.
 * @param s1 Trim (Kırpma) yapılacak string değer.
 * @param set s1 stringinin başında ve sonunda varsa silinecek olan değer.
 * @return char* ==> Trim işlemi sonrasında geriye kalan string
*/
char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);

/**
 * @brief s string'inin içerisinde dolaşır ve
 * her bir karaktere f fonksiyonunu uygular.
 * Uygulama sonucunda oluşan yeni karakterler ile yeni bir string oluşturur.
 *
 * Eğer herhangi bir hata olmazsa yeni string'i geriye döner.
 * Eğer hata olursa geriye NULL döner.
 *
 * @param s String
 * @param f Karakterlere uygulanacak fonksiyon
 * @return char* ==> Yeni oluşturulan string'in başlangıç adresi
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief s string'inin içerisinde dolaşır ve
 * her bir karaktere f fonksiyonunu uygular.
 *
 * @param s string
 * @param f karakterlere uygulanacak fonksiyon
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief c parametresiyle gelen karakteri file descriptor'a yazar.
 *
 * @param c Yazdırılacak olan karakter
 * @param fd Üzerine yazılacak olan file descriptor
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief s parametresiyle gelen string'i verilen file descriptor'a yazar.
 *
 * @param s Yazdırılacak olan string
 * @param fd Üzerine yazılacak olan file descriptor
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief s parametresiyle gelen string'i sonunda new line (\n) karakteri
 * ile birlikte verilen file descriptor'a yazar.
 *
 * @param s Yazdırılacak olan string
 * @param fd Üzerine yazılacak olan file descriptor
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief n parametresiyle gelen intager değeri verilen file descriptor'a yazar.
 *
 * @param n Yazdırılacak olan integer değeri
 * @param fd Yazılacak olan file descriptor
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief Tek Yönlü Bağlı Liste - Singly Linked List
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * @brief Yeni bir Node oluşturur ve
 * Node'a data olarak gelen content parametresini verir.
 * Aynı zamanda yeni bir liste başlatmış olur.
 *
 * @param content Node'a verilecek data
 * @return t_list* ==> Node
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Listenin başına yeni bir Node ekler.
 *
 * @param lst Linked List
 * @param new Yeni eklenecek olan Node
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Listenin Node sayısını bulur.
 *
 * @param lst  Listenin başlangıç Node'u
 * @return int ==> Listenin Node sayısı
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Liste'nin son Node'unu döner.
 *
 * @param lst Listenin ilk Node'u
 * @return t_list* ==> Son Node
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Listenin sonuna yeni bir Node ekler.
 *
 * @param lst Linked List
 * @param new Eklenecek olan Node
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Node'un siler ve hafızayı serbest bırakır.
 *
 * @param lst Silinecek olan Node
 * @param del Node temizleyen fonksiyon
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * @brief Listeyi siler ve hafızayı serbest bırakır.
 *
 * @param lst Linked List
 * @param del Node temizleyen fonksiyon
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * @brief Listenin içerisinde dolaşır ve
 * her bir Node'un datasına f fonksiyonunu uygular.
 *
 * @param lst Node
 * @param f Node datasına uygulanacak fonksiyon
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Listenin içerisinde dolaşır ve
 * her bir Node'un datasına f fonksiyonunu uygular.
 * Uygulama sonucunda oluşan yeni Node'lardan yeni bir liste oluşturulur.
 *
 * Eğer herhangi bir hata olmazsa yeni listeyi geriye döner.
 * Eğer f fonksiyonu uygulanırken hata olursa liste oluşturulmaz ve NULL döner.
 *
 * @param lst Listenin ilk Node'u
 * @param f Node datalarına uygulanacak olan fonksiyon
 * @param del Hata olması durumunda Node'ları temizleyecek fonksiyon
 * @return t_list* Yeni oluşturulan liste'nin ilk Node'unu gösteren pointer
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
