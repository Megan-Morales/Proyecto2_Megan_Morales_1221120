#pragma once
#include "PortalEstudiantes.h"

namespace Proyecto2MeganMorales1221120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de URL
	/// </summary>
	public ref class URL : public System::Windows::Forms::Form
	{
	public:
		URL(void)
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
		~URL()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"PERSONAL URL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Estudiantes:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Trabajadores";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(129, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(44, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &URL::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(129, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(44, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Ir";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// URL
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(214, 174);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"URL";
			this->Text = L"URL";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		PortalEstudiantes^ Portal_Estudiantes = gcnew PortalEstudiantes();
		this->Hide();
		Portal_Estudiantes->ShowDialog();
		this->Show();
	}
};
}
