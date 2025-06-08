#pragma once

using namespace std;
using namespace System;
using namespace System::Collections::Generic;
namespace ClasesFloreria {
	public ref class datos
	{

	private:
		String^ Nombre;
		String^ Contacto;
		String^ Hora_llegada;

	public:
		datos(String^ Nombre, String^ Contacto, String^ Hora_llegada) {
			this->Nombre = Nombre;
			this->Contacto = Contacto;
			this->Hora_llegada = Hora_llegada;
		}
		String^ getNombre() { return Nombre; }
		String^ getContacto() { return Contacto; }
		String^ getHora_llegada() { return Hora_llegada; }
		void setNombre(String^ _Nombre) { Nombre = _Nombre; }
		void setContacto(String^ _Contacto) { Contacto = _Contacto; }
		void setHora_llegada(String^ _Hora_llegada) { Hora_llegada = _Hora_llegada; }
	};


	public ref class cola_floreria
	{
	private:
		LinkedList<datos^>^ cola; //defino la decola 

	public:
		cola_floreria() {
			cola = gcnew LinkedList<datos^>();
		}

		void AgregarInicio(datos^ c) {
			cola->AddFirst(c);
		}

		void AgregarFinal(datos^ c) {
			cola->AddLast(c);
		}

		datos^ EliminarInicio() {
			if (cola->Count == 0) return nullptr;
			datos^ dato = cola->First->Value;
			cola->RemoveFirst();
			return dato;
		}

		datos^ EliminarFinal() {
			if (cola->Count == 0) return nullptr;
			datos^ dato = cola->Last->Value;
			cola->RemoveLast();
			return dato;
		}

		LinkedList<datos^>^ ObtenerLista() {
			return cola;
		}

		int ObtenerCantidad() {
			return cola->Count;
		}
	};

	public ref class pila_floreria
	{
	private:
		Stack <datos^>^ pila; //defino la pila 
	public:
		pila_floreria() {
			pila = gcnew Stack<datos^>();
		}
		void Agregar(datos^ c) {
			pila->Push(c);
		}
		datos^ Eliminar() {
			if (pila->Count == 0) return nullptr;
			datos^ dato = pila->Peek();
			pila->Pop();
			return dato;
		}
		int ObtenerCantidad() {
			return pila->Count;
		}
	};
}