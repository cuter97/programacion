#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista_T crearLista()
{
	Lista_T l;
	l.n=0;
	l.lista=NULL;
	return l;
}

int InsertarPrimero(Lista_T *l, int x )
{
	struct Nodo *nuevo;
	nuevo=(struct Nodo*)malloc(sizeof(struct Nodo));
	if(!nuevo)
	{
		printf("no se aloco memoria");
		exit (-1);
	}
	nuevo->dato=x;
	nuevo->sig=l->lista;
	l->lista=nuevo;
	(l->n)++;

	return (1);
}

int InsertarUltimo(Lista_T *l, int x )
{
	struct Nodo *nuevo,*aux;
	nuevo=(struct Nodo*)malloc(sizeof(struct Nodo));
	if(!nuevo)
	{
		printf("no se aloco memoria");
		exit (-1);
	}
	nuevo->dato=x;
	nuevo->sig=NULL;
	//recorrer lista
	if(!EstaVacia(*l))
	{
		aux=l->lista;
		while(aux->sig!=NULL)
		{
			aux=aux->sig;
		}
	//aux ubicado en el ultimo nodo
		aux->sig=nuevo;
	}
	else
		l->lista=nuevo;
	(l->n)++;
	return (1);
}

int RecorrerLista(Lista_T l )
{
	if(!EstaVacia(l))
	{
		struct Nodo *aux;
		aux=l.lista;
		while(aux!=NULL)
		{
			printf("%d ",aux->dato);
			aux=aux->sig;
		}printf("\n");
		return 1;
	}
	return -1;
}

int EstaVacia(Lista_T l)
{
	if(l.n==0)
	{
		return 1;
	}
	return 0;
}

int VaciarLista(Lista_T *l)
{
	if(!EstaVacia(*l))
	{
		struct Nodo *aux;
		aux=l->lista;
		while(aux!=NULL)
		{
			l->lista=aux->sig;
			free(aux);
			aux=l->lista;
			(l->n)--;
		}
		return 1;
	}
	return -1;
}

int SuprimirDato(Lista_T *l, int x)
{
	if(!EstaVacia(*l))
	{
		struct Nodo *aux,*p;
		aux=l->lista;
		if((aux->dato)!=1)
		{
			while(aux!=NULL && aux->dato!=x)
			{
				p=aux;
				aux=aux->sig;
			}
			if(aux)
			{
				p->sig=aux->sig;
			}
		}
		else
				l->lista=aux->sig;
		free(aux);
		(l->n)--;
		return 1;
	}
  return -1;
}

int SuprimirNodo(Lista_T *l, int pos)
{
	if(pos<=LongitudLista(*l)&&pos>0)
	{
		struct Nodo *aux,*p;
		aux=l->lista;
		if(pos!=1)
		{
			for (int i = 1; i < pos; ++i)
			{
				p=aux;
				aux=aux->sig;
			}
			p->sig=aux->sig;
		}
		else
			l->lista=aux->sig;
		free(aux);
		(l->n)--;
		return 1;
	}
	return -1;
}

int LongitudLista(Lista_T l)
{
	return l.n;
}

int DevolverDatoPosicion(Lista_T l, int pos)
{
	if(pos<=LongitudLista(l)&&pos>0)
	{
		struct Nodo *aux;
		aux=l.lista;
		for (int i = 1; i < pos; ++i)
			aux=aux->sig;

		return aux->dato;
	}
	return 0;
}

int InsertarPosicion(Lista_T *l,int num, int pos)
{
	if(!EstaVacia(*l)&&(pos<=LongitudLista(*l)))
	{
		struct Nodo *nuevo,*aux,*act;
		nuevo=(struct Nodo*)malloc(sizeof(struct Nodo));
		if (!nuevo)
		{
			printf("no se aloco memoria");
			exit (-1);
		}
		nuevo->dato=num;
		if ((pos!=1) && (pos!=LongitudLista(*l)))
		{
			aux=l->lista;
			act=l->lista;
			for ( int i = 1; i < pos; i++)
			{
				aux=act;
				act=act->sig;
			}
			aux->sig=nuevo;
			nuevo->sig=act;
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
