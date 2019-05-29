#pragma once

namespace Textanwendung {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Hauptfenster
	/// </summary>
	public ref class Hauptfenster : public System::Windows::Forms::Form
	{
	public:
		Hauptfenster(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Hauptfenster()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox_Eingabe;
	protected:
	private: System::Windows::Forms::Label^  label_Eingabe;
	private: System::Windows::Forms::TextBox^  textBox_Ausgabe;
	private: System::Windows::Forms::Button^  button_TextAnfuegen;
	private: System::Windows::Forms::Button^  button_ZeichenZaehlen;
	private: System::Windows::Forms::Label^  label_ZeichenZaehlen;




	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Hauptfenster::typeid));
			this->textBox_Eingabe = (gcnew System::Windows::Forms::TextBox());
			this->label_Eingabe = (gcnew System::Windows::Forms::Label());
			this->textBox_Ausgabe = (gcnew System::Windows::Forms::TextBox());
			this->button_TextAnfuegen = (gcnew System::Windows::Forms::Button());
			this->button_ZeichenZaehlen = (gcnew System::Windows::Forms::Button());
			this->label_ZeichenZaehlen = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox_Eingabe
			// 
			this->textBox_Eingabe->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_Eingabe->Location = System::Drawing::Point(47, 72);
			this->textBox_Eingabe->Name = L"textBox_Eingabe";
			this->textBox_Eingabe->Size = System::Drawing::Size(285, 40);
			this->textBox_Eingabe->TabIndex = 0;
			// 
			// label_Eingabe
			// 
			this->label_Eingabe->AutoSize = true;
			this->label_Eingabe->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Eingabe->Location = System::Drawing::Point(43, 46);
			this->label_Eingabe->Name = L"label_Eingabe";
			this->label_Eingabe->Size = System::Drawing::Size(234, 23);
			this->label_Eingabe->TabIndex = 1;
			this->label_Eingabe->Text = L"Bitte geben Sie einen Text ein:";
			// 
			// textBox_Ausgabe
			// 
			this->textBox_Ausgabe->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_Ausgabe->Location = System::Drawing::Point(47, 164);
			this->textBox_Ausgabe->Multiline = true;
			this->textBox_Ausgabe->Name = L"textBox_Ausgabe";
			this->textBox_Ausgabe->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox_Ausgabe->Size = System::Drawing::Size(285, 295);
			this->textBox_Ausgabe->TabIndex = 2;
			this->textBox_Ausgabe->WordWrap = false;
			// 
			// button_TextAnfuegen
			// 
			this->button_TextAnfuegen->Location = System::Drawing::Point(47, 118);
			this->button_TextAnfuegen->Name = L"button_TextAnfuegen";
			this->button_TextAnfuegen->Size = System::Drawing::Size(285, 40);
			this->button_TextAnfuegen->TabIndex = 3;
			this->button_TextAnfuegen->Text = L"Text anfuegen";
			this->button_TextAnfuegen->UseVisualStyleBackColor = true;
			this->button_TextAnfuegen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_TextAnfuegen_Click);
			// 
			// button_ZeichenZaehlen
			// 
			this->button_ZeichenZaehlen->Location = System::Drawing::Point(338, 72);
			this->button_ZeichenZaehlen->Name = L"button_ZeichenZaehlen";
			this->button_ZeichenZaehlen->Size = System::Drawing::Size(285, 40);
			this->button_ZeichenZaehlen->TabIndex = 4;
			this->button_ZeichenZaehlen->Text = L"---> Zeichen zaehlen";
			this->button_ZeichenZaehlen->UseVisualStyleBackColor = true;
			this->button_ZeichenZaehlen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_ZeichenZaehlen_Click);
			// 
			// label_ZeichenZaehlen
			// 
			this->label_ZeichenZaehlen->AutoSize = true;
			this->label_ZeichenZaehlen->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_ZeichenZaehlen->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ZeichenZaehlen->Location = System::Drawing::Point(638, 73);
			this->label_ZeichenZaehlen->Name = L"label_ZeichenZaehlen";
			this->label_ZeichenZaehlen->Size = System::Drawing::Size(32, 38);
			this->label_ZeichenZaehlen->TabIndex = 5;
			this->label_ZeichenZaehlen->Text = L"0";
			// 
			// Hauptfenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(952, 508);
			this->Controls->Add(this->label_ZeichenZaehlen);
			this->Controls->Add(this->button_ZeichenZaehlen);
			this->Controls->Add(this->button_TextAnfuegen);
			this->Controls->Add(this->textBox_Ausgabe);
			this->Controls->Add(this->label_Eingabe);
			this->Controls->Add(this->textBox_Eingabe);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Hauptfenster";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Textanwendung";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_TextAnfuegen_Click(System::Object^  sender, System::EventArgs^  e);


private: System::Void button_ZeichenZaehlen_Click(System::Object^  sender, System::EventArgs^  e);
};
}
