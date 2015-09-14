#include "record.h"

Record::Record()
{

}

char *Record::getKey()
{
    return key;
}

long Record::getStart()
{
    return start;
}

long Record::getEnd()
{
    return end;
}

