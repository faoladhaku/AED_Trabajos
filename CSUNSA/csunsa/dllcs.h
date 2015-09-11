#ifndef DDL
#define DDL
#include "nodo.h"
#include <cstring>
#include <fstream>
//se creara una doble lista enlazada para manipular las tablas de registros
template<class T>
class DLLcs
{
public:
  nodo<T>* p_head;
  nodo<T>* p_tail;
  nodo<T>* p_current;
public:
  DLLcs();
  void add(T d);
  bool empty();
  void mydelete();
  T* next();
  T* previous();
  T* first();
  T* last();
  T* findkey(char*, T*);
  //~DLLcs();
};
//se creara el constructor asignando el actual como el que se esta usando
template <class T>
DLLcs<T>::DLLcs()
{
  p_head=0;
  this->p_tail=0;
  this->p_current=0;
}
//se usara para saber si el la lista esta vacia
template <class T>
bool DLLcs<T>::empty()
{
  if(!p_head)
    {
      return true;
    }
  return false;
}
//añadira nuevos registros,asiganara el actual
template <class T>
void DLLcs<T>::add(T d)
{
  nodo<T>* nuevo = new nodo<T>(d);
  if(empty())
    {
      this->p_head=nuevo;
      this->p_tail=nuevo;
      this->p_current=p_head;
    }
  else
    {
      this->p_tail->next = nuevo;
      nuevo->previous = p_tail;
      this->p_tail = nuevo;
    }
}
//borrara el nodo actual
template <class T>
void DLLcs<T>::mydelete()
{
  nodo<T>* borrar = this->p_current;
  borrar->previous->next = borrar->next;
  borrar->next->previous = borrar->previous;
  this->p_current = p_current->next;
  delete(borrar);

}
//posicionara el actual en el siguiente, falta probar
template <class T>
T* DLLcs<T>::next()
{
  if(p_current)
    {
      this->p_current = this->p_current->next;
    }
  return this->p_current->dato;
}
//posicionara el actual en el anterior, falta probar
template <class T>
T* DLLcs<T>::previous()
{
  if(p_current)
    {
      this->p_current = this->p_current->previous;
    }
  return this->p_current->dato;
}
//posicionara el actual en el primero
template <class T>
T* DLLcs<T>::first()
{
  if(p_current=!p_head)
    {
      this->p_current = this->p_head;
    }
  return this->p_current->dato;
}
//posicionara el actual en el ultimo
template <class T>
T* DLLcs<T>::last()
{
  if(p_current=!p_tail)
    {
      this->p_current = this->p_tail;
    }
  return this->p_current->dato;
}
//compara la key con el char dato
template <class T>
T* DLLcs<T>::findkey(char* busqueda,T* Records)
{

  nodo<T>* encuentra = p_head;


  while(encuentra)
    {
      if(!strcmp((encuentra->dato).key,busqueda))
        {

          this->p_current = encuentra;
          return &(this->p_current->dato);
        }

      encuentra= encuentra->next;
    }
    cout << "paso" << endl;

    return 0;
}

#endif // DDL
