#define TRUE 1
#define FALSE 0
#define word_max 101
#define def_max 251

typedef char bool;

typedef struct elemento{
  int numero;
} elemento;

typedef struct nodo{
  elemento valor;
  struct nodo* hijoIzq;
  struct nodo* hijoDer;
} nodo;

typedef nodo* arbolBinario;
typedef nodo* posicion;

void Inicializar(arbolBinario *a);
void Destruir(arbolBinario *a);

posicion Raiz(arbolBinario *a);
posicion Padre(arbolBinario *a,posicion p);
posicion HijoDerecho(arbolBinario *a,posicion p); 
posicion HijoIzquierdo(arbolBinario *a,posicion p);
posicion Buscar(arbolBinario *a,elemento e);

bool Vacio(arbolBinario *a);
bool NodoNulo(arbolBinario *a,posicion p);//

elemento LeerNodo(arbolBinario *a,posicion p);

void NuevoHijoDerecho(arbolBinario *a,posicion p,elemento e); 
void NuevoHijoIzquierdo(arbolBinario *a,posicion p,elemento e); 
void BorrarHijoDerecho(arbolBinario *a,posicion p); 
void BorrarHijoIzquierdo(arbolBinario *a,posicion p); 
void BorrarNodo(arbolBinario *a,posicion p); 
void ReemplazarNodo(arbolBinario *a,posicion p,elemento e);
void Insert(arbolBinario *a, elemento e);

void ImprimirElemento(elemento e);
void PreOrden(arbolBinario *a, posicion p);
void InOrden(arbolBinario *a, posicion p);
void PostOrden(arbolBinario *a, posicion p);
