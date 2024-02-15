#pragma once

namespace nextpage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mix
	/// </summary>
	public ref class mix : public System::Windows::Forms::Form
	{
	public:
		mix(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mix()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ p;
	private: System::Windows::Forms::Button^ buttonnext;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textb1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::TextBox^ textBox4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mix::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->p = (gcnew System::Windows::Forms::Button());
			this->buttonnext = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textb1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->progressBar1);
			this->panel1->Controls->Add(this->p);
			this->panel1->Controls->Add(this->buttonnext);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textb1);
			this->panel1->Location = System::Drawing::Point(59, 51);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1786, 939);
			this->panel1->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox4->Location = System::Drawing::Point(802, 194);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(597, 639);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = resources->GetString(L"textBox4.Text");
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox3->Location = System::Drawing::Point(31, 194);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(576, 639);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L"\r\n1.   m มัว    +     a อา \r\n\r\n\r\n   = ma มา  \r\n\r\n2.   x ซี    +     ian เอียน \r\n\r"
				L"\n\r\n   = xian เซียน\r\n\r\n\r\n3.   sh ซรือ    +    ang อัง\r\n\r\n\r\n   = shang ชัง";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &mix::textBox3_TextChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(404, 861);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(923, 53);
			this->progressBar1->TabIndex = 10;
			// 
			// p
			// 
			this->p->Location = System::Drawing::Point(44, 858);
			this->p->Name = L"p";
			this->p->Size = System::Drawing::Size(172, 56);
			this->p->TabIndex = 3;
			this->p->Text = L"NEXTp\r\n";
			this->p->UseVisualStyleBackColor = true;
			// 
			// buttonnext
			// 
			this->buttonnext->Location = System::Drawing::Point(1572, 858);
			this->buttonnext->Name = L"buttonnext";
			this->buttonnext->Size = System::Drawing::Size(172, 56);
			this->buttonnext->TabIndex = 1;
			this->buttonnext->Text = L"NEXT\r\n";
			this->buttonnext->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox2->Location = System::Drawing::Point(31, 124);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(282, 53);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"  หลักการผสมเสียง";
			// 
			// textb1
			// 
			this->textb1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textb1->Location = System::Drawing::Point(31, 21);
			this->textb1->Multiline = true;
			this->textb1->Name = L"textb1";
			this->textb1->Size = System::Drawing::Size(480, 82);
			this->textb1->TabIndex = 0;
			this->textb1->Text = L" lesson 0 : Pinyin";
			this->textb1->TextChanged += gcnew System::EventHandler(this, &mix::textBox1_TextChanged);
			// 
			// mix
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->panel1);
			this->Name = L"mix";
			this->Text = L"mix";
			this->Load += gcnew System::EventHandler(this, &mix::mix_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool switchToMyForm = false;
	private: System::Void mix_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void p_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		switchToMyForm = true;
	}
	//private: System::Void mix_Load(System::Object^ sender, System::EventArgs^ e) {}
	};
}