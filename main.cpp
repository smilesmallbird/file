#include <iostream>
#include <string>
#include <cstdlib>
#include <cfstream>

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


    ifstream fin("/Applications/Parallels\ Desktop.app\");
    if(!fin) {
       cout << "/Applications/Parallels Desktop.app\" << "is find";
    } else {
        cout << "/Applications/Parallels Desktop.app" << "is del";
    }



        return 0;
}
