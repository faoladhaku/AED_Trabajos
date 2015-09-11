/*#include "table.h"

#include <fstream>
#include <iostream>
using namespace std;

template <class T>
Table<T>::Table()
{

}

template <class T>
Table<T>::Table(char *file){
    this->file = file;
}

template<class T>
void Table<T> :: index(){
    char key[10];
    char buffer[1000];
    std::ifstream in;
    in.open(file);
    long offset=0;
    while(!in.eof())
    {
        in.getline(key,11,',');
        in.getline(buffer,1000);

        Record R;
        strcpy(R.key , key);
        R.start = offset;
        m_record.pushBack(R);
        offset+= strlen(key) + strlen(buffer) + 3;
    }
}


template<class T>
T Table<T>::GetRecord(char * key)
{
       char data[1000];
       Record r = m_record.find(key);
       ifstream file(this->file);
       file.seekg(r.start,ios::begin);
       file.getline(data,1000);
       cout<<data<<endl;

}*/

