#include "Hauptfenster.h"

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
		textBox_Ausgabe->Text += "\r\n";
		textBox_Eingabe->Text = "";
		label_ZeichenZaehlen->Text = "0";
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
