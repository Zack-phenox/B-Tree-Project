#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
char ch;
fstream file;
file.open("myfile.txt",ios::out); // write only
cin.get(ch);

file << "hi"
    << "hello"
    << "how" <<endl;
    
while(ch != '\n')
{
file.put(ch);
cin.get(ch);
}
file.close();
file.open("myfile.txt",ios::in); // read only
while(file)
{
file.get(ch);
cout<<ch;
}
file.close();
// getc();

return 0;
    
}