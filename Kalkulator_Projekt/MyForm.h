#include <Windows.h>
#include "Info.h"
#include <string>
#include "ONP.h"
#include "Algorytmy.h"
#include <math.h>
#pragma once

namespace KalkulatorProjekt {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ be;

	protected:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ naWierzchuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ informacjeToolStripMenuItem;
	private: System::Windows::Forms::Button^ bx2;


	private: System::Windows::Forms::Button^ bPower;

	private: System::Windows::Forms::Button^ b7;
	private: System::Windows::Forms::Button^ b8;
	private: System::Windows::Forms::Button^ b9;



	private: System::Windows::Forms::Button^ b4;

	private: System::Windows::Forms::Button^ b5;

	private: System::Windows::Forms::Button^ b6;

	private: System::Windows::Forms::Button^ b1;
	private: System::Windows::Forms::Button^ b2;
	private: System::Windows::Forms::Button^ b3;
	private: System::Windows::Forms::Button^ bDzielenie;




	private: System::Windows::Forms::Button^ bMnozenie;

	private: System::Windows::Forms::Button^ bMinus;

	private: System::Windows::Forms::Button^ bPlus;

	private: System::Windows::Forms::Button^ b0;

	private: System::Windows::Forms::Button^ bPrzecinek;
	private: System::Windows::Forms::Button^ bZnak;


	private: System::Windows::Forms::Button^ bWynik;
	private: System::Windows::Forms::Button^ bExp;
	private: System::Windows::Forms::Button^ bSilnia;
	private: System::Windows::Forms::Button^ bRES;

	private: System::Windows::Forms::Button^ bUsun;





	private: System::Windows::Forms::Button^ bWartBezwzgl;

	private: System::Windows::Forms::Button^ bOdwroc;

	private: System::Windows::Forms::Button^ bPi;

	private: System::Windows::Forms::Button^ bSqrt;

	private: System::Windows::Forms::Button^ bLog;

	private: System::Windows::Forms::Button^ bLogN;
	private: System::Windows::Forms::Button^ bDwojkowy;
	private: System::Windows::Forms::Button^ bTrojkowy;
	private: System::Windows::Forms::Button^ bOsemkowy;
	private: System::Windows::Forms::Button^ bSzesnastkowy;
	private: System::Windows::Forms::Button^ bmod;

	private: System::Windows::Forms::Button^ bProcent;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ standardowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trygonometriaToolStripMenuItem;
	private: System::Windows::Forms::Button^ sin;
	private: System::Windows::Forms::Button^ cos;
private: System::Windows::Forms::Button^ tg;
private: System::Windows::Forms::Button^ ctg;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Button^ sinh;
private: System::Windows::Forms::Button^ cosh;















	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->be = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->naWierzchuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trygonometriaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informacjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bx2 = (gcnew System::Windows::Forms::Button());
			this->bPower = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->bDzielenie = (gcnew System::Windows::Forms::Button());
			this->bMnozenie = (gcnew System::Windows::Forms::Button());
			this->bMinus = (gcnew System::Windows::Forms::Button());
			this->bPlus = (gcnew System::Windows::Forms::Button());
			this->b0 = (gcnew System::Windows::Forms::Button());
			this->bPrzecinek = (gcnew System::Windows::Forms::Button());
			this->bZnak = (gcnew System::Windows::Forms::Button());
			this->bWynik = (gcnew System::Windows::Forms::Button());
			this->bExp = (gcnew System::Windows::Forms::Button());
			this->bSilnia = (gcnew System::Windows::Forms::Button());
			this->bRES = (gcnew System::Windows::Forms::Button());
			this->bUsun = (gcnew System::Windows::Forms::Button());
			this->bWartBezwzgl = (gcnew System::Windows::Forms::Button());
			this->bOdwroc = (gcnew System::Windows::Forms::Button());
			this->bPi = (gcnew System::Windows::Forms::Button());
			this->bSqrt = (gcnew System::Windows::Forms::Button());
			this->bLog = (gcnew System::Windows::Forms::Button());
			this->bLogN = (gcnew System::Windows::Forms::Button());
			this->bDwojkowy = (gcnew System::Windows::Forms::Button());
			this->bTrojkowy = (gcnew System::Windows::Forms::Button());
			this->bOsemkowy = (gcnew System::Windows::Forms::Button());
			this->bSzesnastkowy = (gcnew System::Windows::Forms::Button());
			this->bmod = (gcnew System::Windows::Forms::Button());
			this->bProcent = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sin = (gcnew System::Windows::Forms::Button());
			this->cos = (gcnew System::Windows::Forms::Button());
			this->tg = (gcnew System::Windows::Forms::Button());
			this->ctg = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->sinh = (gcnew System::Windows::Forms::Button());
			this->cosh = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(7, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox1->Size = System::Drawing::Size(300, 30);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			// 
			// be
			// 
			this->be->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->be->Location = System::Drawing::Point(109, 116);
			this->be->Name = L"be";
			this->be->Size = System::Drawing::Size(45, 45);
			this->be->TabIndex = 1;
			this->be->Text = L"e";
			this->be->UseVisualStyleBackColor = false;
			this->be->Click += gcnew System::EventHandler(this, &MyForm::be_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem, this->informacjeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(314, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->naWierzchuToolStripMenuItem,
					this->zamknijToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"&Plik";
			this->plikToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::plikToolStripMenuItem_Click);
			// 
			// naWierzchuToolStripMenuItem
			// 
			this->naWierzchuToolStripMenuItem->Name = L"naWierzchuToolStripMenuItem";
			this->naWierzchuToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->naWierzchuToolStripMenuItem->Text = L"Na wierzchu";
			this->naWierzchuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::naWierzchuToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zamknijToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->standardowyToolStripMenuItem,
					this->trygonometriaToolStripMenuItem
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->widokToolStripMenuItem->Text = L"&Widok";
			this->widokToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::widokToolStripMenuItem_Click);
			// 
			// standardowyToolStripMenuItem
			// 
			this->standardowyToolStripMenuItem->Name = L"standardowyToolStripMenuItem";
			this->standardowyToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->standardowyToolStripMenuItem->Text = L"Standardowy";
			this->standardowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardowyToolStripMenuItem_Click);
			// 
			// trygonometriaToolStripMenuItem
			// 
			this->trygonometriaToolStripMenuItem->Name = L"trygonometriaToolStripMenuItem";
			this->trygonometriaToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->trygonometriaToolStripMenuItem->Text = L"Trygonometria";
			this->trygonometriaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::trygonometriaToolStripMenuItem_Click);
			// 
			// informacjeToolStripMenuItem
			// 
			this->informacjeToolStripMenuItem->Name = L"informacjeToolStripMenuItem";
			this->informacjeToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->informacjeToolStripMenuItem->Text = L"&Informacje";
			this->informacjeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::informacjeToolStripMenuItem_Click);
			// 
			// bx2
			// 
			this->bx2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bx2->Location = System::Drawing::Point(160, 116);
			this->bx2->Name = L"bx2";
			this->bx2->Size = System::Drawing::Size(45, 45);
			this->bx2->TabIndex = 3;
			this->bx2->Text = L"x^2";
			this->bx2->UseVisualStyleBackColor = false;
			this->bx2->Click += gcnew System::EventHandler(this, &MyForm::bx2_Click);
			// 
			// bPower
			// 
			this->bPower->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bPower->Location = System::Drawing::Point(211, 116);
			this->bPower->Name = L"bPower";
			this->bPower->Size = System::Drawing::Size(45, 45);
			this->bPower->TabIndex = 4;
			this->bPower->Text = L"pow";
			this->bPower->UseVisualStyleBackColor = false;
			this->bPower->Click += gcnew System::EventHandler(this, &MyForm::bDzialanie_Click);
			// 
			// b7
			// 
			this->b7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->b7->Location = System::Drawing::Point(109, 167);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(45, 45);
			this->b7->TabIndex = 5;
			this->b7->Text = L"7";
			this->b7->UseVisualStyleBackColor = false;
			this->b7->Click += gcnew System::EventHandler(this, &MyForm::b_Click);
			// 
			// b8
			// 
			this->b8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->b8->Location = System::Drawing::Point(160, 167);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(45, 45);
			this->b8->TabIndex = 6;
			this->b8->Text = L"8";
			this->b8->UseVisualStyleBackColor = false;
			this->b8->Click += gcnew System::EventHandler(this, &MyForm::b_Click);
			// 
			// b9
			// 
			this->b9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->b9->Location = System::Drawing::Point(211, 167);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(45, 45);
			this->b9->TabIndex = 7;
			this->b9->Text = L"9";
			this->b9->UseVisualStyleBackColor = false;
			this->b9->Click += gcnew System::EventHandler(this, &MyForm::b_Click);
			// 
			// b4
			// 
			this->b4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->b4->Location = System::Drawing::Point(109, 218);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(45, 45);
			this->b4->TabIndex = 8;
			this->b4->Text = L"4";
			this->b4->UseVisualStyleBackColor = false;
			this->b4->Click += gcnew System::EventHandler(this, &MyForm::b_Click);
			// 
			// b5
			// 
			this->b5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->b5->Location = System::Drawing::Point(160, 218);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(45, 45);
			this->b5->TabIndex = 9;
			this->b5->Text = L"5";
			this->b5->UseVisualStyleBackColor = false;
			this->b5->Click += gcnew System::EventHandler(this, &MyForm::b_Click);
			// 
			// b6
			// 
			this->b6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->b6->Location = System::Drawing::Point(211, 218);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(45, 45);
			this->b6->TabIndex = 10;
			this->b6->Text = L"6";
			this->b6->UseVisualStyleBackColor = false;
			this->b6->Click += gcnew System::EventHandler(this, &MyForm::b_Click);
			// 
			// b1
			// 
			this->b1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->b1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->b1->Location = System::Drawing::Point(109, 269);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(45, 45);
			this->b1->TabIndex = 11;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = false;
			this->b1->Click += gcnew System::EventHandler(this, &MyForm::b_Click);
			// 
			// b2
			// 
			this->b2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->b2->Location = System::Drawing::Point(160, 269);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(45, 45);
			this->b2->TabIndex = 12;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = false;
			this->b2->Click += gcnew System::EventHandler(this, &MyForm::b_Click);
			// 
			// b3
			// 
			this->b3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->b3->Location = System::Drawing::Point(211, 269);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(45, 45);
			this->b3->TabIndex = 13;
			this->b3->Text = L"3";
			this->b3->UseVisualStyleBackColor = false;
			this->b3->Click += gcnew System::EventHandler(this, &MyForm::b_Click);
			// 
			// bDzielenie
			// 
			this->bDzielenie->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bDzielenie->Location = System::Drawing::Point(262, 116);
			this->bDzielenie->Name = L"bDzielenie";
			this->bDzielenie->Size = System::Drawing::Size(45, 45);
			this->bDzielenie->TabIndex = 14;
			this->bDzielenie->Text = L"/";
			this->bDzielenie->UseVisualStyleBackColor = false;
			this->bDzielenie->Click += gcnew System::EventHandler(this, &MyForm::bDzialanie_Click);
			// 
			// bMnozenie
			// 
			this->bMnozenie->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bMnozenie->Location = System::Drawing::Point(262, 167);
			this->bMnozenie->Name = L"bMnozenie";
			this->bMnozenie->Size = System::Drawing::Size(45, 45);
			this->bMnozenie->TabIndex = 15;
			this->bMnozenie->Text = L"x";
			this->bMnozenie->UseVisualStyleBackColor = false;
			this->bMnozenie->Click += gcnew System::EventHandler(this, &MyForm::bDzialanie_Click);
			// 
			// bMinus
			// 
			this->bMinus->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bMinus->Location = System::Drawing::Point(262, 218);
			this->bMinus->Name = L"bMinus";
			this->bMinus->Size = System::Drawing::Size(45, 45);
			this->bMinus->TabIndex = 16;
			this->bMinus->Text = L"-";
			this->bMinus->UseVisualStyleBackColor = false;
			this->bMinus->Click += gcnew System::EventHandler(this, &MyForm::bDzialanie_Click);
			// 
			// bPlus
			// 
			this->bPlus->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bPlus->Location = System::Drawing::Point(262, 269);
			this->bPlus->Name = L"bPlus";
			this->bPlus->Size = System::Drawing::Size(45, 45);
			this->bPlus->TabIndex = 17;
			this->bPlus->Text = L"+";
			this->bPlus->UseVisualStyleBackColor = false;
			this->bPlus->Click += gcnew System::EventHandler(this, &MyForm::bDzialanie_Click);
			// 
			// b0
			// 
			this->b0->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->b0->Location = System::Drawing::Point(160, 320);
			this->b0->Name = L"b0";
			this->b0->Size = System::Drawing::Size(45, 45);
			this->b0->TabIndex = 18;
			this->b0->Text = L"0";
			this->b0->UseVisualStyleBackColor = false;
			this->b0->Click += gcnew System::EventHandler(this, &MyForm::b_Click);
			// 
			// bPrzecinek
			// 
			this->bPrzecinek->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bPrzecinek->Location = System::Drawing::Point(211, 320);
			this->bPrzecinek->Name = L"bPrzecinek";
			this->bPrzecinek->Size = System::Drawing::Size(45, 45);
			this->bPrzecinek->TabIndex = 19;
			this->bPrzecinek->Text = L",";
			this->bPrzecinek->UseVisualStyleBackColor = false;
			this->bPrzecinek->Click += gcnew System::EventHandler(this, &MyForm::bPrzecinek_Click);
			// 
			// bZnak
			// 
			this->bZnak->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bZnak->Location = System::Drawing::Point(109, 320);
			this->bZnak->Name = L"bZnak";
			this->bZnak->Size = System::Drawing::Size(45, 45);
			this->bZnak->TabIndex = 20;
			this->bZnak->Text = L"+/-";
			this->bZnak->UseVisualStyleBackColor = false;
			this->bZnak->Click += gcnew System::EventHandler(this, &MyForm::bZnak_Click);
			// 
			// bWynik
			// 
			this->bWynik->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bWynik->Location = System::Drawing::Point(262, 320);
			this->bWynik->Name = L"bWynik";
			this->bWynik->Size = System::Drawing::Size(45, 45);
			this->bWynik->TabIndex = 21;
			this->bWynik->Text = L"=";
			this->bWynik->UseVisualStyleBackColor = false;
			this->bWynik->Click += gcnew System::EventHandler(this, &MyForm::bWynik_Click);
			// 
			// bExp
			// 
			this->bExp->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bExp->Location = System::Drawing::Point(109, 65);
			this->bExp->Name = L"bExp";
			this->bExp->Size = System::Drawing::Size(45, 45);
			this->bExp->TabIndex = 22;
			this->bExp->Text = L"exp";
			this->bExp->UseVisualStyleBackColor = false;
			this->bExp->Click += gcnew System::EventHandler(this, &MyForm::bExp_Click);
			// 
			// bSilnia
			// 
			this->bSilnia->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bSilnia->Location = System::Drawing::Point(160, 65);
			this->bSilnia->Name = L"bSilnia";
			this->bSilnia->Size = System::Drawing::Size(45, 45);
			this->bSilnia->TabIndex = 23;
			this->bSilnia->Text = L"!";
			this->bSilnia->UseVisualStyleBackColor = false;
			this->bSilnia->Click += gcnew System::EventHandler(this, &MyForm::bSilnia_Click);
			// 
			// bRES
			// 
			this->bRES->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bRES->Location = System::Drawing::Point(211, 65);
			this->bRES->Name = L"bRES";
			this->bRES->Size = System::Drawing::Size(45, 45);
			this->bRES->TabIndex = 24;
			this->bRES->Text = L"RES";
			this->bRES->UseVisualStyleBackColor = false;
			this->bRES->Click += gcnew System::EventHandler(this, &MyForm::bRES_Click);
			// 
			// bUsun
			// 
			this->bUsun->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bUsun->Location = System::Drawing::Point(262, 65);
			this->bUsun->Name = L"bUsun";
			this->bUsun->Size = System::Drawing::Size(45, 45);
			this->bUsun->TabIndex = 25;
			this->bUsun->Text = L"DEL";
			this->bUsun->UseVisualStyleBackColor = false;
			this->bUsun->Click += gcnew System::EventHandler(this, &MyForm::bUsun_Click);
			// 
			// bWartBezwzgl
			// 
			this->bWartBezwzgl->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bWartBezwzgl->Location = System::Drawing::Point(58, 65);
			this->bWartBezwzgl->Name = L"bWartBezwzgl";
			this->bWartBezwzgl->Size = System::Drawing::Size(45, 45);
			this->bWartBezwzgl->TabIndex = 26;
			this->bWartBezwzgl->Text = L"|x|";
			this->bWartBezwzgl->UseVisualStyleBackColor = false;
			this->bWartBezwzgl->Click += gcnew System::EventHandler(this, &MyForm::bWartBezwzgl_Click);
			// 
			// bOdwroc
			// 
			this->bOdwroc->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bOdwroc->Location = System::Drawing::Point(58, 116);
			this->bOdwroc->Name = L"bOdwroc";
			this->bOdwroc->Size = System::Drawing::Size(45, 45);
			this->bOdwroc->TabIndex = 27;
			this->bOdwroc->Text = L"1/x";
			this->bOdwroc->UseVisualStyleBackColor = false;
			this->bOdwroc->Click += gcnew System::EventHandler(this, &MyForm::bOdwroc_Click);
			// 
			// bPi
			// 
			this->bPi->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bPi->Location = System::Drawing::Point(58, 167);
			this->bPi->Name = L"bPi";
			this->bPi->Size = System::Drawing::Size(45, 45);
			this->bPi->TabIndex = 28;
			this->bPi->Text = L"pi";
			this->bPi->UseVisualStyleBackColor = false;
			this->bPi->Click += gcnew System::EventHandler(this, &MyForm::bPi_Click);
			// 
			// bSqrt
			// 
			this->bSqrt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bSqrt->Location = System::Drawing::Point(58, 218);
			this->bSqrt->Name = L"bSqrt";
			this->bSqrt->Size = System::Drawing::Size(45, 45);
			this->bSqrt->TabIndex = 29;
			this->bSqrt->Text = L"sqrt";
			this->bSqrt->UseVisualStyleBackColor = false;
			this->bSqrt->Click += gcnew System::EventHandler(this, &MyForm::bSqrt_Click);
			// 
			// bLog
			// 
			this->bLog->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bLog->Location = System::Drawing::Point(58, 269);
			this->bLog->Name = L"bLog";
			this->bLog->Size = System::Drawing::Size(45, 45);
			this->bLog->TabIndex = 30;
			this->bLog->Text = L"log";
			this->bLog->UseVisualStyleBackColor = false;
			this->bLog->Click += gcnew System::EventHandler(this, &MyForm::bDzialanie_Click);
			// 
			// bLogN
			// 
			this->bLogN->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bLogN->Location = System::Drawing::Point(58, 320);
			this->bLogN->Name = L"bLogN";
			this->bLogN->Size = System::Drawing::Size(45, 45);
			this->bLogN->TabIndex = 31;
			this->bLogN->Text = L"ln";
			this->bLogN->UseVisualStyleBackColor = false;
			this->bLogN->Click += gcnew System::EventHandler(this, &MyForm::bLogN_Click);
			// 
			// bDwojkowy
			// 
			this->bDwojkowy->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bDwojkowy->Location = System::Drawing::Point(7, 320);
			this->bDwojkowy->Name = L"bDwojkowy";
			this->bDwojkowy->Size = System::Drawing::Size(45, 45);
			this->bDwojkowy->TabIndex = 32;
			this->bDwojkowy->Text = L"(2)";
			this->bDwojkowy->UseVisualStyleBackColor = false;
			this->bDwojkowy->Click += gcnew System::EventHandler(this, &MyForm::bDwojkowy_Click);
			// 
			// bTrojkowy
			// 
			this->bTrojkowy->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bTrojkowy->Location = System::Drawing::Point(7, 269);
			this->bTrojkowy->Name = L"bTrojkowy";
			this->bTrojkowy->Size = System::Drawing::Size(45, 45);
			this->bTrojkowy->TabIndex = 33;
			this->bTrojkowy->Text = L"(3)";
			this->bTrojkowy->UseVisualStyleBackColor = false;
			this->bTrojkowy->Click += gcnew System::EventHandler(this, &MyForm::bTrojkowy_Click);
			// 
			// bOsemkowy
			// 
			this->bOsemkowy->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bOsemkowy->Location = System::Drawing::Point(7, 218);
			this->bOsemkowy->Name = L"bOsemkowy";
			this->bOsemkowy->Size = System::Drawing::Size(45, 45);
			this->bOsemkowy->TabIndex = 34;
			this->bOsemkowy->Text = L"(8)";
			this->bOsemkowy->UseVisualStyleBackColor = false;
			this->bOsemkowy->Click += gcnew System::EventHandler(this, &MyForm::bOsemkowy_Click);
			// 
			// bSzesnastkowy
			// 
			this->bSzesnastkowy->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bSzesnastkowy->Location = System::Drawing::Point(7, 167);
			this->bSzesnastkowy->Name = L"bSzesnastkowy";
			this->bSzesnastkowy->Size = System::Drawing::Size(45, 45);
			this->bSzesnastkowy->TabIndex = 35;
			this->bSzesnastkowy->Text = L"(16)";
			this->bSzesnastkowy->UseVisualStyleBackColor = false;
			this->bSzesnastkowy->Click += gcnew System::EventHandler(this, &MyForm::bSzesnastkowy_Click);
			// 
			// bmod
			// 
			this->bmod->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bmod->Location = System::Drawing::Point(7, 116);
			this->bmod->Name = L"bmod";
			this->bmod->Size = System::Drawing::Size(45, 45);
			this->bmod->TabIndex = 36;
			this->bmod->Text = L"mod";
			this->bmod->UseVisualStyleBackColor = false;
			this->bmod->Click += gcnew System::EventHandler(this, &MyForm::bDzialanie_Click);
			// 
			// bProcent
			// 
			this->bProcent->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bProcent->Location = System::Drawing::Point(7, 65);
			this->bProcent->Name = L"bProcent";
			this->bProcent->Size = System::Drawing::Size(45, 45);
			this->bProcent->TabIndex = 37;
			this->bProcent->Text = L"%";
			this->bProcent->UseVisualStyleBackColor = false;
			this->bProcent->Click += gcnew System::EventHandler(this, &MyForm::bDzialanie_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(11, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 38;
			// 
			// sin
			// 
			this->sin->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->sin->Location = System::Drawing::Point(318, 65);
			this->sin->Name = L"sin";
			this->sin->Size = System::Drawing::Size(45, 45);
			this->sin->TabIndex = 39;
			this->sin->Text = L"sin(x)";
			this->sin->UseVisualStyleBackColor = false;
			this->sin->Click += gcnew System::EventHandler(this, &MyForm::sin_Click);
			// 
			// cos
			// 
			this->cos->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->cos->Location = System::Drawing::Point(318, 116);
			this->cos->Name = L"cos";
			this->cos->Size = System::Drawing::Size(45, 45);
			this->cos->TabIndex = 40;
			this->cos->Text = L"cos(x)";
			this->cos->UseVisualStyleBackColor = false;
			this->cos->Click += gcnew System::EventHandler(this, &MyForm::cos_Click);
			// 
			// tg
			// 
			this->tg->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tg->Location = System::Drawing::Point(318, 167);
			this->tg->Name = L"tg";
			this->tg->Size = System::Drawing::Size(45, 45);
			this->tg->TabIndex = 41;
			this->tg->Text = L"tg(x)";
			this->tg->UseVisualStyleBackColor = false;
			this->tg->Click += gcnew System::EventHandler(this, &MyForm::tg_Click);
			// 
			// ctg
			// 
			this->ctg->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ctg->Location = System::Drawing::Point(318, 218);
			this->ctg->Name = L"ctg";
			this->ctg->Size = System::Drawing::Size(45, 45);
			this->ctg->TabIndex = 42;
			this->ctg->Text = L"ctg(x)";
			this->ctg->UseVisualStyleBackColor = false;
			this->ctg->Click += gcnew System::EventHandler(this, &MyForm::ctg_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 4.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(319, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 10);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Trygonometria";
			// 
			// sinh
			// 
			this->sinh->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->sinh->Location = System::Drawing::Point(317, 269);
			this->sinh->Name = L"sinh";
			this->sinh->Size = System::Drawing::Size(45, 45);
			this->sinh->TabIndex = 44;
			this->sinh->Text = L"sinh";
			this->sinh->UseVisualStyleBackColor = false;
			this->sinh->Click += gcnew System::EventHandler(this, &MyForm::sinh_Click);
			// 
			// cosh
			// 
			this->cosh->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->cosh->Location = System::Drawing::Point(317, 320);
			this->cosh->Name = L"cosh";
			this->cosh->Size = System::Drawing::Size(45, 45);
			this->cosh->TabIndex = 45;
			this->cosh->Text = L"cosh";
			this->cosh->UseVisualStyleBackColor = false;
			this->cosh->Click += gcnew System::EventHandler(this, &MyForm::cosh_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(314, 376);
			this->Controls->Add(this->cosh);
			this->Controls->Add(this->sinh);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ctg);
			this->Controls->Add(this->tg);
			this->Controls->Add(this->cos);
			this->Controls->Add(this->sin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bProcent);
			this->Controls->Add(this->bmod);
			this->Controls->Add(this->bSzesnastkowy);
			this->Controls->Add(this->bOsemkowy);
			this->Controls->Add(this->bTrojkowy);
			this->Controls->Add(this->bDwojkowy);
			this->Controls->Add(this->bLogN);
			this->Controls->Add(this->bLog);
			this->Controls->Add(this->bSqrt);
			this->Controls->Add(this->bPi);
			this->Controls->Add(this->bOdwroc);
			this->Controls->Add(this->bWartBezwzgl);
			this->Controls->Add(this->bUsun);
			this->Controls->Add(this->bRES);
			this->Controls->Add(this->bSilnia);
			this->Controls->Add(this->bExp);
			this->Controls->Add(this->bWynik);
			this->Controls->Add(this->bZnak);
			this->Controls->Add(this->bPrzecinek);
			this->Controls->Add(this->b0);
			this->Controls->Add(this->bPlus);
			this->Controls->Add(this->bMinus);
			this->Controls->Add(this->bMnozenie);
			this->Controls->Add(this->bDzielenie);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->bPower);
			this->Controls->Add(this->bx2);
			this->Controls->Add(this->be);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kalkulator";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		float Liczba_1;
		float Liczba_2;
		float Wynik;
		bool check = false;
		String^ Operator;
		char Operacja;
	private: System::Void widokToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
// ALGORYTMY
float suma(float x, float y) {
    return (x + y);
}
float roznica(float x, float y) {
	return (x - y);
}

float mnozenie(float x, float y) {
	return (x * y);
}

float dzielenie(float x, float y) {
	return (x / y);
}

float potega_calkowita(float a, int b) {
	float wynik = 1;
	while (b) {
		wynik *= a;
		b--;
	}
	return wynik;
}

void dwojkowy(int a) {
	if (a > 0)
	{
		dwojkowy(a / 2);
		textBox1->Text = textBox1->Text + System::Convert::ToString(a % 2);
	}
}

void trojkowy(int a) {
	if (a > 0)
	{
		trojkowy(a / 3);
		textBox1->Text = textBox1->Text + System::Convert::ToString(a % 3);
	}
}

void osemkowy(int a) {
	if (a > 0)
	{
		osemkowy(a / 8);
		textBox1->Text = textBox1->Text + System::Convert::ToString(a % 8);
	}
}

void szesnastkowy(int a) {
	if (a > 0) {
		szesnastkowy(a / 16);
		if (a % 16 < 10) {
			textBox1->Text = textBox1->Text + System::Convert::ToString(a % 16);
		}
		else {
			switch (a % 16) {
			case 10: textBox1->Text = textBox1->Text + "A";
				break;
			case 11: textBox1->Text = textBox1->Text + "B";
				break;
			case 12: textBox1->Text = textBox1->Text + "C";
				break;
			case 13: textBox1->Text = textBox1->Text + "D";
				break;
			case 14: textBox1->Text = textBox1->Text + "E";
				break;
			case 15: textBox1->Text = textBox1->Text + "F";
				break;
			};
		}
	}
}

int modulo(int a, int b) {
	return a % b;
}

int silnia(int n) {
	if (n < 2) {
		return 1;
	}
	else {
		return n * silnia(n - 1);
	}
}

float procent(float a, float b) {
	return (a*b) / 100;
}

float odwroc(float a) {
	return 1 / a;
}
// KONIEC ALGORYTMOW
private: System::Void plikToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Sleep(500);
	Application::Exit();
}
private: System::Void naWierzchuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TopMost) {
		TopMost = false;
	}
	else {
		TopMost = true;
	}
}
private: System::Void informacjeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Info^ Inf = gcnew Info();
	Inf->Show();
}
private: System::Void b_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ b = safe_cast<Button^>(sender);
	if (textBox1->Text == "0") {
		textBox1->Text = "";
	}
	else if (check) {
		textBox1->Text = "";
		check = false;
	}
	textBox1->Text = textBox1->Text + b->Text;
}
private: System::Void bRES_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
	label1->Text = "";
}
private: System::Void bUsun_Click(System::Object^ sender, System::EventArgs^ e) {
	int dlugosc = textBox1->Text->Length;
	textBox1->Text = textBox1->Text->Remove(dlugosc - 1);
	if (textBox1->Text == "") {
		textBox1->Text = "0";
	}
}

private: System::Void bPi_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(Math::PI);
	check = true;
}

/*private: System::Void bDzialanie_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ b = safe_cast<Button^>(sender);
	int dlugosc = textBox1->Text->Length;
	if (textBox1->Text == "0" && b->Text == "(") {
		textBox1->Text = ")";
	}
	else if (textBox1->Text == "0") {

	}
	else {
		if (textBox1->Text[dlugosc - 1] != b->Text[0]) {
			textBox1->Text = textBox1->Text + b->Text;
		}
		else if (b->Text == "(") {
			textBox1->Text = textBox1->Text + ")";
		}

		else if (b->Text == ")") {
			textBox1->Text = textBox1->Text + "(";
		}
	}
}*/

/*private: System::Void bWynik_Click(System::Object^ sender, System::EventArgs^ e) {
	//textBox1->Text = ONP::InfixToPostfix(textBox1->Text);
}*/
private: System::Void bDzialanie_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ b = safe_cast<Button^>(sender);
	Liczba_1 = float::Parse(textBox1->Text);
	textBox1->Clear();
	Operator = b->Text;
	label1->Text = System::Convert::ToString(Liczba_1) + " " + Operator;
}
private: System::Void bPrzecinek_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textBox1->Text->Contains(".")) {
		textBox1->Text = textBox1->Text + ".";
	}
}
private: System::Void bZnak_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Contains("-")) {
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else {
		textBox1->Text = "-" + textBox1->Text;
	}
}
private: System::Void bWynik_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "";
	Liczba_2 = float::Parse(textBox1->Text);
	if (Operator == "+") {
		textBox1->Text = System::Convert::ToString(suma(Liczba_1, Liczba_2));
	}
	else if (Operator == "-") {
		textBox1->Text = System::Convert::ToString(roznica(Liczba_1, Liczba_2));
	}
	else if (Operator == "/") {
		if (Liczba_2 != 0) {
			textBox1->Text = System::Convert::ToString(dzielenie(Liczba_1, Liczba_2));
		}
		else {
			textBox1->Text = "Nie wolno dzielic przez 0";
			check = true;
		}
	}
	else if (Operator == "x") {
		textBox1->Text = System::Convert::ToString(mnozenie(Liczba_1, Liczba_2));
	}
	else if (Operator == "pow") {
		textBox1->Text = System::Convert::ToString(pow(Liczba_1, Liczba_2));
	}
	else if (Operator == "mod") {
		textBox1->Text = System::Convert::ToString(modulo(Liczba_1, Liczba_2));
	}
	else if (Operator == "%") {
		textBox1->Text = System::Convert::ToString(procent(Liczba_1, Liczba_2));
	}
	else if (Operator == "log") {
		textBox1->Text = System::Convert::ToString(Math::Log(Liczba_1, Liczba_2));
	}
}
private: System::Void bDwojkowy_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = "";
	dwojkowy(liczba);
	check = true;
}
private: System::Void bTrojkowy_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = "";
	trojkowy(liczba);
	check = true;
}
private: System::Void bSzesnastkowy_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = "";
	szesnastkowy(liczba);
	check = true;
}
private: System::Void bOsemkowy_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = "";
	osemkowy(liczba);
	check = true;
}
private: System::Void bSilnia_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(silnia(liczba));
}
private: System::Void bLogN_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(Math::Log(liczba));
}
private: System::Void bWartBezwzgl_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(Math::Abs(liczba));
}
private: System::Void bSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(Math::Sqrt(liczba));
}
private: System::Void bExp_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(Math::Exp(liczba));
}
private: System::Void standardowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 330;
}
private: System::Void trygonometriaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 390;
}
private: System::Void sin_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(Math::Sin(liczba));
}
private: System::Void cosh_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(Math::Cosh(liczba));
}
private: System::Void tg_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(Math::Tan(liczba));
}
private: System::Void ctg_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(Math::Sin(liczba) / Math::Cos(liczba));
}
private: System::Void sinh_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(Math::Sinh(liczba));
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cos_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(Math::Cos(liczba));
}
private: System::Void bOdwroc_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(odwroc(liczba));
}

private: System::Void be_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(Math::E);
	check = true;
}
private: System::Void bx2_Click(System::Object^ sender, System::EventArgs^ e) {
	float liczba = float::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(liczba*liczba);
}
};
}
