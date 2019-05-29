
#include "Hauptfenster.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Textanwendung;


[STAThread]
void main(array<String^>^ args)
{
	/*
	for (int i = 0; i < args->Length; i++) {
		Console::WriteLine(args[i]);
	}
	*/

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Hauptfenster^ fenster1 = gcnew Hauptfenster;
	Application::Run(fenster1);
}