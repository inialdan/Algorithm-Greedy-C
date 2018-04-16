#include <iostream>

using namespace std;

int main()
{
    string lanjut = "y";

    cout << "---------------------------------------------" << endl;
    cout << "|                                           |" << endl;
    cout << "|    Nama   : Aldan Rizki Santosa           |" << endl;
    cout << "|    Rombel : RPL XI - 1                    |" << endl;
    cout << "|                                           |" << endl;
    cout << "---------------------------------------------" << endl;
    while(lanjut == "y"){

        int t100000, t50000 = 50, t20000 = 50, t10000 = 50, t5000 = 50, t2000 = 50, t1000 = 50, t500 = 50, t200 = 50, t100 = 50, t50 = 50;
        int a100000 = 0, a50000 = 0, a20000 = 0, a10000  = 0, a5000  = 0, a2000 = 0, a1000 = 0, a500 = 0, a200 = 0, a100 = 0, a50 = 0;
        int input;


        cout << "Masukan Tampungan Rp.100000 : ";
        cin >> t100000;
        cout << "Masukan Tampungan Rp.50000 : ";
        cin >> t50000;
        cout << "Masukan Tampungan Rp.20000 : ";
        cin >> t20000;
        cout << "Masukan Tampungan Rp.10000 : ";
        cin >> t10000;
        cout << "Masukan Tampungan Rp.5000 : ";
        cin >> t5000;
        cout << "Masukan Tampungan Rp.2000 : ";
        cin >> t2000;
        cout << "Masukan Tampungan Rp.1000 : ";
        cin >> t1000;
        cout << "Masukan Tampungan Rp.500 : ";
        cin >> t500;
        cout << "Masukan Tampungan Rp.200 : ";
        cin >> t200;
        cout << "Masukan Tampungan Rp.100 : ";
        cin >> t100;
        cout << "Masukan Tampungan Rp.50 : ";
        cin >> t50;

        cout << "\n\n";

        cout << "Masukan Angka Mu : ";
        cin >> input;

        cout << "\n\n";

        while(input >= 100000){
            input = input - 100000;
            a100000++;
            t100000 = t100000 - 1;
        }
        while(input >= 50000){
            input = input - 50000;
            a50000++;
            t50000 = t50000 - 1;
        }
        while(input >= 20000){
            input = input - 20000;
            a20000++;
            t20000 = t20000 - 1;
        }
        while(input >= 10000){
            input = input - 10000;
            a10000++;
            t10000 = t10000 - 1;
        }
        while(input >= 5000){
            input = input - 5000;
            a5000++;
            t5000 = t5000 - 1;
        }
        while(input >= 2000){
            input = input - 2000;
            a2000++;
            t2000 = t2000 - 1;
        }
        while(input >= 1000){
            input = input - 1000;
            a1000++;
            t1000 = t1000 - 1;
        }
        while(input >= 500){
            input = input - 500;
            a500++;
            t500 = t500 - 1;
        }
        while(input >= 100){
            input = input - 100;
            a100++;
            t100 = t100 - 1;
        }
        while(input >= 50){
            input = input - 50;
            a50++;
            t50 = t50 - 1;
        }

        cout << "Duit Rp.100000 : " << a100000 << "\t\t" << "Sisa Duit Rp.100000 : " << t100000 << endl;
        cout << "Duit Rp.50000  : " << a50000 << "\t\t" << "Sisa Duit Rp.50000  : " << t50000 << endl;
        cout << "Duit Rp.20000  : " << a20000 << "\t\t" << "Sisa Duit Rp.20000  : " << t20000 << endl;
        cout << "Duit Rp.10000  : " << a10000 << "\t\t" << "Sisa Duit Rp.10000  : " << t10000 << endl;
        cout << "Duit Rp.5000   : " << a5000 << "\t\t" << "Sisa Duit Rp.5000   : " << t5000 << endl;
        cout << "Duit Rp.2000   : " << a2000 << "\t\t" << "Sisa Duit Rp.2000   : " << t2000 << endl;
        cout << "Duit Rp.1000   : " << a1000 << "\t\t" << "Sisa Duit Rp.1000   : " << t1000 << endl;
        cout << "Duit Rp.500    : " << a500 << "\t\t" << "Sisa Duit Rp.500    : " << t500 << endl;
        cout << "Duit Rp.200    : " << a200 << "\t\t" << "Sisa Duit Rp.200    : " << t200 << endl;
        cout << "Duit Rp.100    : " << a100 << "\t\t" << "Sisa Duit Rp.100    : " << t100 << endl;
        cout << "Duit Rp.50     : " << a50 << "\t\t" << "Sisa Duit Rp.50     : " << t50 << endl;

        cout << "Tekan Enter jika ingin lanjut." << endl;
        return 0;
        cout << "\nMau Lanjut ? (y/n)";
        cin >> lanjut;
    }
}
