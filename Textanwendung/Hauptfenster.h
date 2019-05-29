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
	private: System::Windows::Forms::Button^  button_AusgabeLoeschen;
	private: System::Windows::Forms::Button^  button_TextGross;
	private: System::Windows::Forms::Button^  button_TextKlein;
	private: System::Windows::Forms::Label^  label_AusgabeZeichenZaehlenBeschreibung;
	private: System::Windows::Forms::Label^  label_AusgabeZeichenZaehlen;
	private: System::Windows::Forms::TextBox^  textBox_PruefeZeichenkette;

	private: System::Windows::Forms::Button^  button_PruefeZeichenkette;
	private: System::Windows::Forms::Label^  label_WoerterZaehlen;

	private: System::Windows::Forms::Button^  button_WoerterZaehlen;





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
			this->button_AusgabeLoeschen = (gcnew System::Windows::Forms::Button());
			this->button_TextGross = (gcnew System::Windows::Forms::Button());
			this->button_TextKlein = (gcnew System::Windows::Forms::Button());
			this->label_AusgabeZeichenZaehlenBeschreibung = (gcnew System::Windows::Forms::Label());
			this->label_AusgabeZeichenZaehlen = (gcnew System::Windows::Forms::Label());
			this->textBox_PruefeZeichenkette = (gcnew System::Windows::Forms::TextBox());
			this->button_PruefeZeichenkette = (gcnew System::Windows::Forms::Button());
			this->label_WoerterZaehlen = (gcnew System::Windows::Forms::Label());
			this->button_WoerterZaehlen = (gcnew System::Windows::Forms::Button());
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
			this->textBox_Ausgabe->ReadOnly = true;
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
			// button_AusgabeLoeschen
			// 
			this->button_AusgabeLoeschen->Location = System::Drawing::Point(47, 540);
			this->button_AusgabeLoeschen->Name = L"button_AusgabeLoeschen";
			this->button_AusgabeLoeschen->Size = System::Drawing::Size(285, 40);
			this->button_AusgabeLoeschen->TabIndex = 6;
			this->button_AusgabeLoeschen->Text = L"Ausgabe loeschen";
			this->button_AusgabeLoeschen->UseVisualStyleBackColor = true;
			this->button_AusgabeLoeschen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_AusgabeLoeschen_Click);
			// 
			// button_TextGross
			// 
			this->button_TextGross->Location = System::Drawing::Point(338, 164);
			this->button_TextGross->Name = L"button_TextGross";
			this->button_TextGross->Size = System::Drawing::Size(285, 40);
			this->button_TextGross->TabIndex = 7;
			this->button_TextGross->Text = L"Text gross machen";
			this->button_TextGross->UseVisualStyleBackColor = true;
			this->button_TextGross->Click += gcnew System::EventHandler(this, &Hauptfenster::button_TextGross_Click);
			// 
			// button_TextKlein
			// 
			this->button_TextKlein->Location = System::Drawing::Point(338, 210);
			this->button_TextKlein->Name = L"button_TextKlein";
			this->button_TextKlein->Size = System::Drawing::Size(285, 40);
			this->button_TextKlein->TabIndex = 8;
			this->button_TextKlein->Text = L"Text klein machen";
			this->button_TextKlein->UseVisualStyleBackColor = true;
			this->button_TextKlein->Click += gcnew System::EventHandler(this, &Hauptfenster::button_TextKlein_Click);
			// 
			// label_AusgabeZeichenZaehlenBeschreibung
			// 
			this->label_AusgabeZeichenZaehlenBeschreibung->AutoSize = true;
			this->label_AusgabeZeichenZaehlenBeschreibung->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_AusgabeZeichenZaehlenBeschreibung->Location = System::Drawing::Point(43, 472);
			this->label_AusgabeZeichenZaehlenBeschreibung->Name = L"label_AusgabeZeichenZaehlenBeschreibung";
			this->label_AusgabeZeichenZaehlenBeschreibung->Size = System::Drawing::Size(248, 23);
			this->label_AusgabeZeichenZaehlenBeschreibung->TabIndex = 9;
			this->label_AusgabeZeichenZaehlenBeschreibung->Text = L"Anzahl Zeichen in der Ausgabe:";
			// 
			// label_AusgabeZeichenZaehlen
			// 
			this->label_AusgabeZeichenZaehlen->AutoSize = true;
			this->label_AusgabeZeichenZaehlen->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_AusgabeZeichenZaehlen->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_AusgabeZeichenZaehlen->Location = System::Drawing::Point(291, 465);
			this->label_AusgabeZeichenZaehlen->Name = L"label_AusgabeZeichenZaehlen";
			this->label_AusgabeZeichenZaehlen->Size = System::Drawing::Size(32, 38);
			this->label_AusgabeZeichenZaehlen->TabIndex = 10;
			this->label_AusgabeZeichenZaehlen->Text = L"0";
			// 
			// textBox_PruefeZeichenkette
			// 
			this->textBox_PruefeZeichenkette->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_PruefeZeichenkette->Location = System::Drawing::Point(338, 286);
			this->textBox_PruefeZeichenkette->Name = L"textBox_PruefeZeichenkette";
			this->textBox_PruefeZeichenkette->Size = System::Drawing::Size(285, 40);
			this->textBox_PruefeZeichenkette->TabIndex = 11;
			this->textBox_PruefeZeichenkette->TextChanged += gcnew System::EventHandler(this, &Hauptfenster::textBox_PruefeZeichenkette_TextChanged);
			// 
			// button_PruefeZeichenkette
			// 
			this->button_PruefeZeichenkette->Location = System::Drawing::Point(338, 332);
			this->button_PruefeZeichenkette->Name = L"button_PruefeZeichenkette";
			this->button_PruefeZeichenkette->Size = System::Drawing::Size(285, 40);
			this->button_PruefeZeichenkette->TabIndex = 12;
			this->button_PruefeZeichenkette->Text = L"Pruefe Zeichenkette";
			this->button_PruefeZeichenkette->UseVisualStyleBackColor = true;
			this->button_PruefeZeichenkette->Click += gcnew System::EventHandler(this, &Hauptfenster::button_PruefeZeichenkette_Click);
			// 
			// label_WoerterZaehlen
			// 
			this->label_WoerterZaehlen->AutoSize = true;
			this->label_WoerterZaehlen->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_WoerterZaehlen->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_WoerterZaehlen->Location = System::Drawing::Point(638, 394);
			this->label_WoerterZaehlen->Name = L"label_WoerterZaehlen";
			this->label_WoerterZaehlen->Size = System::Drawing::Size(32, 38);
			this->label_WoerterZaehlen->TabIndex = 14;
			this->label_WoerterZaehlen->Text = L"0";
			// 
			// button_WoerterZaehlen
			// 
			this->button_WoerterZaehlen->Location = System::Drawing::Point(338, 393);
			this->button_WoerterZaehlen->Name = L"button_WoerterZaehlen";
			this->button_WoerterZaehlen->Size = System::Drawing::Size(285, 40);
			this->button_WoerterZaehlen->TabIndex = 13;
			this->button_WoerterZaehlen->Text = L"Woerter zaehlen";
			this->button_WoerterZaehlen->UseVisualStyleBackColor = true;
			this->button_WoerterZaehlen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_WoerterZaehlen_Click);
			// 
			// Hauptfenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(952, 626);
			this->Controls->Add(this->label_WoerterZaehlen);
			this->Controls->Add(this->button_WoerterZaehlen);
			this->Controls->Add(this->button_PruefeZeichenkette);
			this->Controls->Add(this->textBox_PruefeZeichenkette);
			this->Controls->Add(this->label_AusgabeZeichenZaehlen);
			this->Controls->Add(this->label_AusgabeZeichenZaehlenBeschreibung);
			this->Controls->Add(this->button_TextKlein);
			this->Controls->Add(this->button_TextGross);
			this->Controls->Add(this->button_AusgabeLoeschen);
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

		// Deklaration Button Click Methoden
		private: System::Void button_TextAnfuegen_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void button_ZeichenZaehlen_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void button_AusgabeLoeschen_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void button_TextGross_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void button_TextKlein_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void button_PruefeZeichenkette_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void button_WoerterZaehlen_Click(System::Object^  sender, System::EventArgs^  e);

		 // Deklaration Text Changed Methoden
		private: System::Void textBox_PruefeZeichenkette_TextChanged(System::Object^  sender, System::EventArgs^  e);

		// Deklaration Key Press Methoden (ist nicht am Button nicht verknüpft!!!)
		private: System::Void textBox_PruefeZeichenkette_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);

		// Deklaration Eigene Methoden
		private: System::Void zaehleWoerterAusgabe();
		private: System::Void pruefeZeichenkette();

};
}
