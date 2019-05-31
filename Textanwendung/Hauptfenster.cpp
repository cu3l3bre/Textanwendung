#include "Hauptfenster.h"


// Button Click Methoden------------------------------------------------------------------------

System::Void Textanwendung::Hauptfenster::button_TextAnfuegen_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	// Text in der Eingabe lesen
	//String^ eingabeText = textBox_Eingabe->Text;

	// diesen Text an die Textbox zur Ausgabe anfügen
	//textBox_Ausgabe->Text += eingabeText;

	// oder halt direkt nä
	if (textBox_Eingabe->Text != "")
	{
		textBox_Ausgabe->Text += "- " + textBox_Eingabe->Text;
		
		// so für zeilenumbruch
		//textBox_Ausgabe->Text += "\r\n";

		// oder das
		textBox_Ausgabe->Text += Environment::NewLine;
		
		textBox_Eingabe->Text = "";
		label_ZeichenZaehlen->Text = "0";

		label_AusgabeZeichenZaehlen->Text = textBox_Ausgabe->TextLength.ToString();

		zaehleWoerterAusgabe();

		
		//pruefeZeichenkette();
		// jetzt als simulierter click, sodass der Button qausi vom Programm selbst gedrückt wird
		button_PruefeZeichenkette->PerformClick();


	}
	else
	{
		// Do nothing
	}
	textBox_Eingabe->Focus();
}


System::Void Textanwendung::Hauptfenster::button_ZeichenZaehlen_Click(System::Object^  sender, System::EventArgs^  e)
{
	//int laengeEingabetext = textBox_Eingabe->TextLength;
	//label_ZeichenZaehlen->Text = laengeEingabetext.ToString();

	// oder als einzeiler
	//label_ZeichenZaehlen->Text = (textBox_Eingabe->TextLength).ToString();

	// geht auch so
	label_ZeichenZaehlen->Text = textBox_Eingabe->TextLength.ToString();

	textBox_Eingabe->Focus();

	// note
	// die variable, wird automatisch in den Datentyp Int32 umgewandelt,
	// der eine Methode bereitstellt, die das in einen String umwandelt
	// also von int nach int32, die hat die Methode
	//Int32^ test = 6;
	// test->ToString();
}


System::Void Textanwendung::Hauptfenster::button_AusgabeLoeschen_Click(System::Object^  sender, System::EventArgs^  e)
{
	textBox_Ausgabe->Text = "";
	//textBox_Ausgabe->Text = String::Empty;
	//textBox_Ausgabe->Clear();

	label_AusgabeZeichenZaehlen->Text = "0";
	label_WoerterZaehlen->Text = "0";
	textBox_PruefeZeichenkette->BackColor = Color::White;
	textBox_PruefeZeichenkette->Text = "";
	textBox_Eingabe->Focus();
}


System::Void Textanwendung::Hauptfenster::button_TextGross_Click(System::Object^  sender, System::EventArgs^  e)
{
	textBox_Ausgabe->Text = textBox_Ausgabe->Text->ToUpper();
	textBox_Eingabe->Focus();
}


System::Void Textanwendung::Hauptfenster::button_TextKlein_Click(System::Object^  sender, System::EventArgs^  e)
{
	textBox_Ausgabe->Text = textBox_Ausgabe->Text->ToLower();
	textBox_Eingabe->Focus();
}


System::Void Textanwendung::Hauptfenster::button_PruefeZeichenkette_Click(System::Object^  sender, System::EventArgs^  e)
{
	pruefeZeichenkette();
}


System::Void Textanwendung::Hauptfenster::button_WoerterZaehlen_Click(System::Object^  sender, System::EventArgs^  e)
{
	zaehleWoerterAusgabe();
}



// Text Changed Metoden-------------------------------------------------------------------------

System::Void Textanwendung::Hauptfenster::textBox_PruefeZeichenkette_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	pruefeZeichenkette();
}


// Key Press Metoden (das ist kacke und deswegen nicht am Button verknüpft)---------------------

System::Void Textanwendung::Hauptfenster::textBox_PruefeZeichenkette_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if (textBox_PruefeZeichenkette->Text != "")
	{
		if (textBox_Ausgabe->Text->Contains(textBox_PruefeZeichenkette->Text))
		{
			textBox_PruefeZeichenkette->BackColor = Color::LimeGreen;
		}
		else
		{
			textBox_PruefeZeichenkette->BackColor = Color::Red;
		}
	}
	else
	{
		textBox_PruefeZeichenkette->BackColor = Color::White;
	}

}
//----------------------------------------------------------------------------------------------


// Eigene Methoden------------------------------------------------------------------------------

System::Void Textanwendung::Hauptfenster::zaehleWoerterAusgabe()
{
	if (textBox_Ausgabe->Text != "")
	{
		array<String^>^ anzahlWoerterArray = textBox_Ausgabe->Text->Split('-', ',', ' ');
		// es gibt zu split auch eine option, die leere einträge entfernt, dann bräcuhte ich keine
		// for schleife :P -> StringSplitOptions.RemoveEmptyEntries

		int anzahlWoerter = 0;

		for (int i = 0; i < anzahlWoerterArray->Length; i++)
		{
			if (anzahlWoerterArray[i] != "")
			{
				anzahlWoerter++;
			}
		}
		label_WoerterZaehlen->Text = anzahlWoerter.ToString();
	}
	else
	{
		label_WoerterZaehlen->Text = "0";
	}
}


System::Void Textanwendung::Hauptfenster::pruefeZeichenkette()
{
	if (textBox_PruefeZeichenkette->Text != "")
	{
		if (textBox_Ausgabe->Text->Contains(textBox_PruefeZeichenkette->Text))
		{
			textBox_PruefeZeichenkette->BackColor = Color::LimeGreen;
		}
		else
		{
			textBox_PruefeZeichenkette->BackColor = Color::Red;
		}
	}
	else
	{
		textBox_PruefeZeichenkette->BackColor = Color::White;
	}
}