#pragma once

namespace KalkulatorProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Info
	/// </summary>
	public ref class Info : public System::Windows::Forms::Form
	{
	public:
		Info(void)
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
		~Info()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bZamknijInfo;
	protected:
	private: System::Windows::Forms::Label^ lInfo;

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
			this->bZamknijInfo = (gcnew System::Windows::Forms::Button());
			this->lInfo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bZamknijInfo
			// 
			this->bZamknijInfo->Location = System::Drawing::Point(108, 150);
			this->bZamknijInfo->Name = L"bZamknijInfo";
			this->bZamknijInfo->Size = System::Drawing::Size(70, 25);
			this->bZamknijInfo->TabIndex = 0;
			this->bZamknijInfo->Text = L"Zamknij";
			this->bZamknijInfo->UseVisualStyleBackColor = true;
			this->bZamknijInfo->Click += gcnew System::EventHandler(this, &Info::bZamknijInfo_Click);
			// 
			// lInfo
			// 
			this->lInfo->Font = (gcnew System::Drawing::Font(L"Ink Free", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lInfo->Location = System::Drawing::Point(12, 46);
			this->lInfo->Name = L"lInfo";
			this->lInfo->Size = System::Drawing::Size(260, 92);
			this->lInfo->TabIndex = 1;
			this->lInfo->Text = L"Program napisany w ramach projektu z przedmiotu WDP.\r\n\r\nAutor: Lukasz Boguszko";
			// 
			// Info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lInfo);
			this->Controls->Add(this->bZamknijInfo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Info";
			this->Text = L"Informacje";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bZamknijInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		Info::Close();
	}
	};
}
