#include "Lista2.h"
#include <stdio.h>
#include <stdlib.h>

ListaDE_T crearListaa()
{
  ListaDE_T l;
  l.n=0;
  l.primero=NULL;
  l.ultimo=NULL;
  return l;
}

int InsertarPrimero(ListaDE_T *l, int x )
{
    struct NodoDE *nuevo;
    nuevo=(struct NodoDE*)malloc(sizeof(struct NodoDE));
    if (!nuevo)
    {
      printf("no se aloco memoria");
      exit (-1);
    }
    nuevo->dato=x;
    nuevo->sig=l->primero;
    nuevo->ant=NULL;
    if(l->n!=0)
    {
      l->primero->ant=nuevo;
    }
    else
      l->ultimo=nuevo;

    l->primero=nuevo;
    (l->n)++;

    return (1);
}

int InsertarUltimo(ListaDE_T *l, int x )
{
  struct NodoDE *nuevo,*aux;
	nuevo=(struct NodoDE*)malloc(sizeof(struct NodoDE));
	if(!nuevo)
	{
		printf("no se aloco memoria");
		exit (-1);
	}
  nuevo->dato=x;
  nuevo->sig=NULL;
  nuevo->ant=l->ultimo;
  if (!EstaVacia(*l))
  {
    aux=l->ultimo;
    while(aux->sig!=NULL)
    {
      aux=aux->sig;
    }
    aux->sig=nuevo;
    nuevo->ant=aux;
  }
  else
    l->primero=nuevo;
    
    l->ultimo=nuevo;
    (l->n)++;
  return (1);

}

int RecorrerListaEnOrden(ListaDE_T l )
{
  if(!EstaVacia(l))
	{
		struct NodoDE *aux;
		aux=l.primero;
		while(aux!=NULL)
		{
			printf("%d ",aux->dato);
			aux=aux->sig;
		}printf("\n");
		return 1;
	}
	return -1;
}

int RecorrerListaEnOrdenInverso(ListaDE_T l)
{
  if(!EstaVacia(l))
	{
		struct NodoDE *aux;
		aux=l.ultimo;
		while(aux!=NULL)
		{
			printf("%d ",aux->dato);
			aux=aux->ant;
		}printf("\n");
		return 1;
	}
	return -1;
}

int EstaVacia(ListaDE_T l)
{
	if(l.n==0)
	{
		return 1;
	}
	return 0;
}

int SuprimirNodo(ListaDE_T *l, int pos)
{
  if (pos<=LongitudLista(*l)&&pos>0)
  {
    struct NodoDE *aux,*p;
    aux=l->primero;
    if (pos!=1)
    {
      for (int i = 1; i < pos; i++)
      {
        p=aux;
        aux=aux->sig;
      }
      p->sig=aux->sig;
      if(aux->sig)
      {
        aux->sig->ant=p;
      }
    }
    else
    {
      l->primero=aux->sig;
      aux->sig->ant=NULL;
    }
    if(aux && aux->sig==NULL)
    {
      l->ultimo=aux->ant;
    }
    (l->n)--;
    free(aux);
    return 1;
  }
  return -1;
}

int SuprimirDato(ListaDE_T *l, int x)
{
  if(!EstaVacia(*l))
	{
		struct NodoDE *aux,*p;
		aux=l->primero;
		if((aux->dato)!=x)
		{
			while(aux!=NULL && aux->dato!=x)
			{
				p=aux;
				aux=aux->sig;
			}
			if(aux && aux->dato==x)
			{
				p->sig=aux->sig;
        if(aux->sig)
        {
          aux->sig->ant=p;
        }
			}
		}
		else
    {
				l->primero=aux->sig;
        aux->sig->ant=NULL;
    }
    if(aux && aux->sig==NULL)
    {
      l->ultimo=aux->ant;
    }
    free(aux);
    (l->n)--;
    return 1;
	}
  return -1;
}

int VaciarLista(ListaDE_T *l)
{
	if(!EstaVacia(*l))
	{
		struct NodoDE *aux;
		aux=l->primero;
		while(aux!=NULL)
		{
			l->primero=aux->sig;
			free(aux);
			aux=l->primero;
			(l->n)--;
		}
		return 1;
	}
	return -1;
}

int LongitudLista(ListaDE_T l)
{
	return l.n;
}

int DevolverDatoPosicion(ListaDE_T l, int pos)
{
  if(pos<=LongitudLista(l)&&pos>0)
	{
		struct NodoDE *aux;
		aux=l.primero;
		for (int i = 1; i < pos; ++i)
			aux=aux->sig;

		return aux->dato;
	}
	return 0;
}

int InsertarPosicion(ListaDE_T *l,int num, int pos)
{
	if(!EstaVacia(*l)&&(pos<=LongitudLista(*l)))
	{
		struct NodoDE *nuevo,*ult,*act;
		nuevo=(struct NodoDE*)malloc(sizeof(struct NodoDE));
		if (!nuevo)
		{
			printf("no se aloco memoria");
			exit (-1);
		}
		nuevo->dato=num;
		if ((pos!=1) && (pos!=LongitudLista(*l)))
		{
			ult=l->primero;
			act=l->primero;
			for ( int i = 1; i < pos; i++)
			{
				ult=act;
				act=act->sig;
			}
			ult->sig=nuevo;
      nuevo->ant=ult;
			nuevo->sig=act;
      act->ant=nuevo;

			l->n=l->n+1;
		}
		if (pos==1)
			InsertarPrimero(l,num);
			else
				if(pos==LongitudLista(*l))
					InsertarUltimo(l,num);
	}
	return 0;
}
