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
    Samsung samsung1 = Samsung("Samsung","SSD M.2","i7 gen 11","RTX 3070");
    cout<< " " <<endl;
    Xiaomi xiaomi1 = Xiaomi("Corsair","SSD Sata","i7 gen 12","RTX 3060ti");

    return 0;
}