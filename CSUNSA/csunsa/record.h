#ifndef RECORD_H
#define RECORD_H


class Record
{
public:
    Record();

    char key[8];
    long start;
    long end;

    char* getKey();
    long getStart();
    long getEnd();

};

#endif // RECORD_H
