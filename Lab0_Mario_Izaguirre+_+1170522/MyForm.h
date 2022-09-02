#pragma once

namespace Lab0MarioIzaguirre1170522 {

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
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textPrimerNumero;
	private: System::Windows::Forms::TextBox^ textSegundoNumero;
	private: System::Windows::Forms::Button^ CALCULAR;
	private: System::Windows::Forms::Label^ TOTAL;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textPrimerNumero = (gcnew System::Windows::Forms::TextBox());
			this->textSegundoNumero = (gcnew System::Windows::Forms::TextBox());
			this->CALCULAR = (gcnew System::Windows::Forms::Button());
			this->TOTAL = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PRIMER NUMERO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"SEGUNDO NUMERO";
			// 
			// textPrimerNumero
			// 
			this->textPrimerNumero->Location = System::Drawing::Point(184, 44);
			this->textPrimerNumero->Name = L"textPrimerNumero";
			this->textPrimerNumero->Size = System::Drawing::Size(100, 20);
			this->textPrimerNumero->TabIndex = 2;
			// 
			// textSegundoNumero
			// 
			this->textSegundoNumero->Location = System::Drawing::Point(184, 77);
			this->textSegundoNumero->Name = L"textSegundoNumero";
			this->textSegundoNumero->Size = System::Drawing::Size(100, 20);
			this->textSegundoNumero->TabIndex = 3;
			// 
			// CALCULAR
			// 
			this->CALCULAR->Location = System::Drawing::Point(108, 135);
			this->CALCULAR->Name = L"CALCULAR";
			this->CALCULAR->Size = System::Drawing::Size(132, 51);
			this->CALCULAR->TabIndex = 4;
			this->CALCULAR->Text = L"CALCULAR";
			this->CALCULAR->UseVisualStyleBackColor = true;
			this->CALCULAR->Click += gcnew System::EventHandler(this, &MyForm::CALCULAR_Click);
			// 
			// TOTAL
			// 
			this->TOTAL->AutoSize = true;
			this->TOTAL->Location = System::Drawing::Point(69, 221);
			this->TOTAL->Name = L"TOTAL";
			this->TOTAL->Size = System::Drawing::Size(0, 13);
			this->TOTAL->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(314, 332);
			this->Controls->Add(this->TOTAL);
			this->Controls->Add(this->CALCULAR);
			this->Controls->Add(this->textSegundoNumero);
			this->Controls->Add(this->textPrimerNumero);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CALCULAR_Click(System::Object^ sender, System::EventArgs^ e) {
		int primernum = Convert::ToInt32(textPrimerNumero->Text);
		int segundonum = Convert::ToInt32(textSegundoNumero->Text);

		int Total = primernum + segundonum;
		TOTAL->Text = "Total: " + Total;
	}
};
}
