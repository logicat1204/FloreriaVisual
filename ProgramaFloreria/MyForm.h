#pragma once

#include "MyForm.h" 
using namespace System;
using namespace System::Windows::Forms;
using namespace ClasesFloreria;
using namespace std;

namespace ProgramaFloreria {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		cola_floreria^ cola_clientes = gcnew(cola_floreria);
		pila_floreria^ pila_clientes = gcnew(pila_floreria);
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ lblTitulo;

	private: System::Windows::Forms::DateTimePicker^ dateTimeFecha;
	private: System::Windows::Forms::Panel^ panelCola;
	private: System::Windows::Forms::TextBox^ txtPNombre;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtCContacto;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ InfoContacto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ horaLlegada;
	private: System::Windows::Forms::Panel^ panelAtencion;
	private: System::Windows::Forms::Button^ btnDeshacer;


	private: System::Windows::Forms::Button^ btnAtender;
	private: System::Windows::Forms::DateTimePicker^ txtPHora;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtPContacto;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;



	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panelAtencion = (gcnew System::Windows::Forms::Panel());
			this->txtPHora = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtPContacto = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnDeshacer = (gcnew System::Windows::Forms::Button());
			this->panelCola = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtCContacto = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPNombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAtender = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->InfoContacto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->horaLlegada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->dateTimeFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panelAtencion->SuspendLayout();
			this->panelCola->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 434);
			this->panel1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(24, 110);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Atenci�n en florer�a";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cola de ingreso";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panelAtencion);
			this->panel2->Controls->Add(this->btnDeshacer);
			this->panel2->Controls->Add(this->panelCola);
			this->panel2->Controls->Add(this->btnAtender);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(200, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(950, 434);
			this->panel2->TabIndex = 1;
			// 
			// panelAtencion
			// 
			this->panelAtencion->Controls->Add(this->txtPHora);
			this->panelAtencion->Controls->Add(this->label7);
			this->panelAtencion->Controls->Add(this->txtPContacto);
			this->panelAtencion->Controls->Add(this->label6);
			this->panelAtencion->Controls->Add(this->textBox1);
			this->panelAtencion->Controls->Add(this->label5);
			this->panelAtencion->Location = System::Drawing::Point(3, 110);
			this->panelAtencion->Name = L"panelAtencion";
			this->panelAtencion->Size = System::Drawing::Size(400, 312);
			this->panelAtencion->TabIndex = 9;
			// 
			// txtPHora
			// 
			this->txtPHora->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->txtPHora->Location = System::Drawing::Point(25, 188);
			this->txtPHora->Name = L"txtPHora";
			this->txtPHora->Size = System::Drawing::Size(200, 22);
			this->txtPHora->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 168);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 16);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Hora de llegada";
			// 
			// txtPContacto
			// 
			this->txtPContacto->Location = System::Drawing::Point(25, 119);
			this->txtPContacto->Name = L"txtPContacto";
			this->txtPContacto->Size = System::Drawing::Size(100, 22);
			this->txtPContacto->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 16);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Informaci�n de Contacto";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(25, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Nombre del cliente";
			// 
			// btnDeshacer
			// 
			this->btnDeshacer->Location = System::Drawing::Point(697, 378);
			this->btnDeshacer->Name = L"btnDeshacer";
			this->btnDeshacer->Size = System::Drawing::Size(133, 44);
			this->btnDeshacer->TabIndex = 6;
			this->btnDeshacer->Text = L"Deshacer atenci�n";
			this->btnDeshacer->UseVisualStyleBackColor = true;
			this->btnDeshacer->Click += gcnew System::EventHandler(this, &MyForm::btnDeshacer_Click);
			// 
			// panelCola
			// 
			this->panelCola->Controls->Add(this->button5);
			this->panelCola->Controls->Add(this->button4);
			this->panelCola->Controls->Add(this->button3);
			this->panelCola->Controls->Add(this->dateTimePicker1);
			this->panelCola->Controls->Add(this->label3);
			this->panelCola->Controls->Add(this->txtCContacto);
			this->panelCola->Controls->Add(this->label2);
			this->panelCola->Controls->Add(this->txtPNombre);
			this->panelCola->Controls->Add(this->label1);
			this->panelCola->Location = System::Drawing::Point(6, 110);
			this->panelCola->Name = L"panelCola";
			this->panelCola->Size = System::Drawing::Size(396, 312);
			this->panelCola->TabIndex = 2;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(277, 180);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 41);
			this->button5->TabIndex = 8;
			this->button5->Text = L"LIMPIAR";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(277, 119);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 43);
			this->button4->TabIndex = 7;
			this->button4->Text = L"ELIMINAR";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(277, 56);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 45);
			this->button3->TabIndex = 6;
			this->button3->Text = L"GUARDAR";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(24, 189);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Hora de llegada";
			// 
			// txtCContacto
			// 
			this->txtCContacto->Location = System::Drawing::Point(21, 120);
			this->txtCContacto->Name = L"txtCContacto";
			this->txtCContacto->Size = System::Drawing::Size(197, 22);
			this->txtCContacto->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Informaci�n de Contacto";
			// 
			// txtPNombre
			// 
			this->txtPNombre->Location = System::Drawing::Point(21, 56);
			this->txtPNombre->Name = L"txtPNombre";
			this->txtPNombre->Size = System::Drawing::Size(197, 22);
			this->txtPNombre->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// btnAtender
			// 
			this->btnAtender->Location = System::Drawing::Point(503, 378);
			this->btnAtender->Name = L"btnAtender";
			this->btnAtender->Size = System::Drawing::Size(126, 44);
			this->btnAtender->TabIndex = 5;
			this->btnAtender->Text = L"Atender";
			this->btnAtender->UseVisualStyleBackColor = true;
			this->btnAtender->Click += gcnew System::EventHandler(this, &MyForm::btnAtender_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Nombre,
					this->InfoContacto, this->horaLlegada
			});
			this->dataGridView1->Location = System::Drawing::Point(413, 147);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(525, 213);
			this->dataGridView1->TabIndex = 4;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 125;
			// 
			// InfoContacto
			// 
			this->InfoContacto->HeaderText = L"Informaci�n de Contacto";
			this->InfoContacto->MinimumWidth = 6;
			this->InfoContacto->Name = L"InfoContacto";
			this->InfoContacto->Width = 125;
			// 
			// horaLlegada
			// 
			this->horaLlegada->HeaderText = L"Hora de Llegada";
			this->horaLlegada->MinimumWidth = 6;
			this->horaLlegada->Name = L"horaLlegada";
			this->horaLlegada->Width = 125;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(560, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(259, 28);
			this->label4->TabIndex = 3;
			this->label4->Text = L"COLA DE ATENCI�N";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->lblTitulo);
			this->panel3->Controls->Add(this->dateTimeFecha);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(950, 100);
			this->panel3->TabIndex = 1;
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(6, 20);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(67, 26);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"COLA";
			// 
			// dateTimeFecha
			// 
			this->dateTimeFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimeFecha->Location = System::Drawing::Point(6, 60);
			this->dateTimeFecha->Name = L"dateTimeFecha";
			this->dateTimeFecha->Size = System::Drawing::Size(200, 22);
			this->dateTimeFecha->TabIndex = 0;
			this->dateTimeFecha->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimeFecha_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1150, 434);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Floreria";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panelAtencion->ResumeLayout(false);
			this->panelAtencion->PerformLayout();
			this->panelCola->ResumeLayout(false);
			this->panelCola->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dateTimeFecha_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	datos^ nueva = gcnew datos(txtPNombre->Text, txtCContacto->Text, dateTimePicker1->Text);
	cola_clientes->AgregarFinal(nueva);
	//utilizando grid: 
	array<String^>^ fila = gcnew array<String^>{ txtPNombre->Text, txtCContacto->Text, dateTimePicker1->Text};
	dataGridView1->Rows->Add(fila);
	dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	datos^ primero;
	primero = cola_clientes->EliminarInicio();
	if (dataGridView1->Rows->Count > 0) {
		// Accede a la primera fila 
		DataGridViewRow^ fila = dataGridView1->Rows[0];
		// Guarda los valores en los TextBox 
		txtPNombre->Text = fila->Cells[0]->Value != nullptr ? fila->Cells[0]->Value->ToString() : "";
		txtCContacto->Text = fila->Cells[1]->Value != nullptr ? fila->Cells[1]->Value->ToString() : "";
		// Elimina la fila del grid y agregue para cuando esta vacio, no elimina (el IF) 
		if (dataGridView1->Rows->Count > 0 && !dataGridView1->Rows[0]->IsNewRow) {
			dataGridView1->Rows->RemoveAt(0);
		}
		// Opcional: seleccionar la nueva primera fila si existe 
		if (dataGridView1->Rows->Count > 0) {
			dataGridView1->ClearSelection();
			dataGridView1->Rows[0]->Selected = true;
		}
	}
}
//funcion para limpiar espacios de input
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	txtPNombre->Text = "";
	txtCContacto->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panelCola->Visible = false;
	panelAtencion->Visible = true;
	lblTitulo->Text = "ATENCION A CLIENTE EN LA FLORER�A";
	btnAtender->Visible = true;
	btnDeshacer->Visible = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panelCola->Visible = true;
	panelAtencion->Visible = false;
	lblTitulo->Text = "COLA";
	btnAtender->Visible = false;
	btnDeshacer->Visible = false;
}
private: System::Void btnAtender_Click(System::Object^ sender, System::EventArgs^ e) {
	clear_atencion();
	datos^ primero;
	// Sacando de la cola, para atender  
	primero = cola_clientes->EliminarInicio(); // Elimina de la cola 

	//Elimina de la tabla visual 
	if (dataGridView1->Rows->Count > 0) {
		pila_clientes->Agregar(primero);    //inserta en la pila 
		// Accede a la primera fila 
		DataGridViewRow^ fila = dataGridView1->Rows[0];
		// Guarda los valores en los TextBox 
		txtPNombre->Text = fila->Cells[0]->Value != nullptr ? fila->Cells[0]->Value->ToString() : "";
		txtPContacto->Text = fila->Cells[1]->Value != nullptr ? fila->Cells[1]->Value->ToString() : "";
		txtPHora->Text = fila->Cells[2]->Value != nullptr ? fila->Cells[2]->Value->ToString() : "";
		// Elimina la fila del grid 
		dataGridView1->Rows->RemoveAt(0);
		// Opcional: seleccionar la nueva primera fila si existe 
		if (dataGridView1->Rows->Count > 0) {
			dataGridView1->ClearSelection();
			dataGridView1->Rows[0]->Selected = true;
		}
	}
}
private: System::Void btnDeshacer_Click(System::Object^ sender, System::EventArgs^ e) {

	datos^ primero;
	primero = pila_clientes->Eliminar(); //se Saca de la pila 
	if (primero != nullptr) {
		cola_clientes->AgregarInicio(primero);//Se vuelve a poner a la cola 
		//Ahora hay que adicionarlo al Grid 
		dataGridView1->Rows->Insert(0, primero->getNombre(), primero->getContacto(), primero-> getHora_llegada());
dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
dataGridView1->CurrentCell = dataGridView1->Rows[0]->Cells[0];
clear_atencion();
	}
}
void clear_atencion() 
{
	txtPNombre->Text = "";
	txtPContacto->Text = "";
	txtPHora->Text = "";
}

};
};


[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProgramaFloreria::MyForm form;
	Application::Run(% form);
}