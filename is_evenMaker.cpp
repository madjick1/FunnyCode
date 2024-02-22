#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFS;

    outFS.open("out.txt");

    if(!outFS.is_open()) return 1;


    outFS << "#include <iostream>\n#include <fstream>\nusing namespace std;\n\nbool is_even()\n{\n\tint num;\n\tcin >> num;\n\n";
    outFS << "\tif (num == 0) {\n\t\treturn true;\n";
    
    


    int num = 0;
    cin >> num;
    
    for (unsigned i = 1; i < num; i++) {
        outFS << "\t} else if (num == " << i << ") {\n\t\t";
        if (i % 2 == 0) {
            outFS << "return true;";
        }
        else {
            outFS << "return false;";
        }
        outFS << "\n";
    }
    outFS << "\t} else {\n\t\treturn false;\n\t}\n}";
    

}