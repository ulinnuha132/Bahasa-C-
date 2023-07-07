#include <iostream>
#include <string>

using namespace std;

class Samsung {
    public:
       string processor;
       string memori;
       string internal;
       string vga;

    Samsung(string inputprocessor, string inputmemori, string inputinternal, string inputvga){
        Samsung::processor = inputprocessor;
        Samsung::memori = inputmemori;
        Samsung::internal = inputinternal;
        Samsung::vga = inputvga;

        cout << Samsung::processor << endl;
        cout << Samsung::memori << endl;
        cout << Samsung::internal << endl;
        cout << Samsung::vga << endl;
    }
};

class Xiaomi {
    public:
       string processor;
       string memori;
       string internal;
       string vga;


    Xiaomi(string inputprocessor, string inputmemori, string inputinternal, string inputvga){
        Xiaomi::processor = inputprocessor;
        Xiaomi::memori = inputmemori;
        Xiaomi::internal = inputinternal;
        Xiaomi::vga = inputvga;
        
        cout << Xiaomi::processor << endl;
        cout << Xiaomi::memori << endl;
        cout << Xiaomi::internal << endl;
        cout << Xiaomi::vga << endl;
    }
};

int main(int argc, char const *argv[])
{
    Samsung samsung1 = Samsung("Memori Samsung berfungsi lebih stabil karna sesuai merek","SSD M.2 berfungsi mengolah data lebih cepat","i7 gen 11 berfungsi agar mengolah algoritma","RTX 3070 agar grafis lebih real");
    cout<< " " <<endl;
    Xiaomi xiaomi1 = Xiaomi("Corsair berfungsi lebih cepat membuka file","SSD Sata lebih cepat merangkai data","i7 gen 12 berfungsi lebih cepat dibanding gen sebelumnya dalam mengolah data","RTX 3060ti lebih stabil dalam menampilkan graphics dibanding vga non ti");

    return 0;
}
