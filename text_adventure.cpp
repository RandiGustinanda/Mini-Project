#include <iostream>
#include <stdlib.h>

int main(){
  
  std::cout << "=======================================\n";
  std::cout << "=     A    NN   N  D  D  D    I I I   =\n";
  std::cout << "=   A A A  N  N N  D      D     I     =\n";
  std::cout << "=  A     A N    N  D  D  D    I I I   =\n";
  std::cout << "=   --------------------------------- =\n";
  std::cout << "=          Andi Text-Adventure        =\n";
  std::cout << "=                Randi                =\n";
  std::cout << "=======================================\n";

  std::cout << "  penulis buku anak-anak yang masih berjuang untuk   mendapatkan kesuksesan. Selama bertahun-tahun, dia terus berusaha keras untuk mendapatkan pengakuan dan ketenaran di dunia sastra.\n"; 
  std::cout << "  Di sisi lain, ada seorang teman lama Andi yang menawarkan bantuan kepadanya. Teman Andi itu adalah seorang pengusaha sukses yang juga tertarik pada dunia sastra. Dia menawarkan Andi untuk membantu mempromosikan karya Andi dan bahkan menawarkan dana untuk penerbitan secara mandiri. Andi senang dengan tawaran itu, tetapi dia tidak yakin apakah itu akan berhasil.\n\n";
  std::cout << "Tentukan pilihan anda : \n    1) Menerima kesepakatan dengan penerbit dan menyerahkan hak cipta ceritanya.\n    2) Menerima tawaran dari temannya untuk penerbitan secara mandiri.\n    3) Memutuskan untuk tidak menerbitkan cerita itu sama sekali.\n";
 
  int pilihanandi = 0;
  char lanjut = 'y';

  do{
    std::cout << "  > ";
    std::cin >> pilihanandi;
    std::cout << "\n";
    } while (pilihanandi != 1 && pilihanandi != 2 && pilihanandi != 3);

    if(pilihanandi == 1){
        std::cout << "Andi akan mendapatkan keuntungan finansial dari kesepakatan tersebut, tetapi dia harus menyerahkan hak cipta ceritanya sehingga ia tidak memiliki kendali atas penggunaan cerita tersebut. Ia mungkin juga kehilangan kreativitasnya karena harus mengikuti arahan penerbit.\n";
        std::cout << "tekan tombol apa saja untuk melanjutkan \n";
        std::cout << "  > ";
        std::cin >> lanjut ;
        std::cout << "Cerita berakhir dan akhirnya andi hidup sukses tanpa kreativitas\n";
    }else if(pilihanandi == 2){
        std::cout << "Andi merasa bahwa dengan cara ini, dia masih memiliki kendali atas karyanya dan dapat menghasilkan uang dari penjualan buku tanpa harus menyerahkan hak cipta ceritanya.Andi segera berbicara dengan temannya dan memulai proses penerbitan secara mandiri. Mereka berdua bekerja sama untuk menghasilkan buku yang berkualitas tinggi dan mempromosikannya secara online dan offline. Andi juga menggunakan media sosial dan blognya untuk memperkenalkan bukunya ke para pembaca.Ternyata, buku Andi sukses besar.\n\n";
        std::cout << "Andi kembali duduk di meja kerjanya sambil memandang dua pilihan yang ada di depannya. Dia merasa bahwa keberhasilannya dalam penerbitan buku pertamanya memberinya banyak kemungkinan untuk masa depan karirnya. Namun, dia tahu bahwa dia harus membuat keputusan yang tepat untuk langkah berikutnya.\n\n";
        std::cout << "    1)meneruskan kariernya sebagai penulis fiksi dan menulis buku berikutnya. Andi sangat menyukai proses kreatif menulis cerita, dan dia merasa bahwa masih banyak kisah yang ingin dia sampaikan\n";
        std::cout << "    2)beralih ke bidang penulisan non-fiksi dan menulis buku tentang topik yang ia minati, yaitu kehidupan digital dan teknologi informasi.\n";
        do{
           std::cout << "  > ";
           std::cin >> pilihanandi;
           std::cout << "\n";
          } while (pilihanandi != 1 && pilihanandi != 2);
        if(pilihanandi == 1){
           std::cout << " Andi mungkin akan mendapatkan kesuksesan besar dengan karya-karyanya yang kreatif dan menginspirasi. Namun, ia juga harus bersaing dengan banyak penulis fiksi lainnya, dan suksesnya tidak selalu terjamin.\n";
           std::cout << "=================\n";
           std::cout << "= game berakhir =\n";
           std::cout << "=================\n";
        }else if (pilihanandi == 2){
           std::cout << "Dalam hal pendapatan, buku non-fiksi Andi mungkin tidak akan terjual sebanyak buku fiksi, tetapi ia akan memiliki peluang untuk menjadi pembicara atau ahli di berbagai konferensi dan acara terkait topik yang ia tulis. Selain itu, Andi akan memiliki kesempatan untuk menulis buku lain dengan topik yang berbeda untuk meningkatkan kualitas karirnya sebagai penulis.\n\n";
          std::cout << "    1)Mengambil pekerjaan tetap di perusahaan teknologi terkemuka sebagai penulis konten digital\n";
          std::cout << "    2)Membuka usaha toko buku online yang fokus pada genre sastra digital.\n";
          do{
           std::cout << "  > ";
           std::cin >> pilihanandi;
           std::cout << "\n";
          } while (pilihanandi != 1 && pilihanandi != 2);
          if(pilihanandi == 1){
            std::cout << "selamat andi harus bekerja dibawah tekanan dikarenakan sering disuruh suruh atasan\n";
           std::cout << "=================\n";
           std::cout << "= game berakhir =\n";
           std::cout << "=================\n";
          }else if (pilihanandi == 2){
           std::cout << "Dalam pilihan ini, Andi akan menjadi bosnya sendiri, dan akan memiliki kendali penuh atas bisnisnya. dan hidup bahagia\n";
           std::cout << "=================\n";
           std::cout << "= game berakhir =\n";
           std::cout << "=================\n";
          }
        } 
    }else if(pilihanandi == 3){
        std::cout << "andi bangkut dikarenakan hanya menikmati cerita yang ditulisnya sendirian akhirnya andi kelaparan\n";
        std::cout << "=================\n";
        std::cout << "= game berakhir =\n";
        std::cout << "=================\n";
    }
}