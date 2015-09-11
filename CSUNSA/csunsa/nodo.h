#ifndef NODO
#define NODO
//se creara el nodo para la doble lista enlazada, que pueda aceptar cualquier dato
template <class T>
class nodo
{
public:
  T dato;
  nodo<T>* next;
  nodo<T>* previous;
  nodo();
  nodo(T datoN);
  void destructor();
};
template <class T>
nodo<T>::nodo()
{
  this->dato = 0;
  this->next = 0;
  this->previous = 0;
}
template <class T>
nodo<T>::nodo(T datoN)
{
  this->dato = datoN;
  this->next = 0;
  this->previous = 0;
}
template <class T>
void nodo<T>::destructor()
{
  delete(this->nodo);
}

#endif // NODO
