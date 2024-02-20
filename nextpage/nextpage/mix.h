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
	private: System::Windows::Forms::Button^ GoBack;
	protected:

	private: System::Windows::Forms::Button^ buttonnext;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textb1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button14;



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
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->GoBack = (gcnew System::Windows::Forms::Button());
			this->buttonnext = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textb1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button19);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button21);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->progressBar1);
			this->panel1->Controls->Add(this->GoBack);
			this->panel1->Controls->Add(this->buttonnext);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textb1);
			this->panel1->Location = System::Drawing::Point(59, 51);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1786, 939);
			this->panel1->TabIndex = 1;
			// 
			// button22
			// 
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.Image")));
			this->button22->Location = System::Drawing::Point(1208, 735);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(57, 47);
			this->button22->TabIndex = 16;
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->Location = System::Drawing::Point(1208, 612);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(57, 47);
			this->button19->TabIndex = 16;
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(1208, 506);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(57, 47);
			this->button16->TabIndex = 16;
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(1194, 390);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(57, 47);
			this->button13->TabIndex = 16;
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->Location = System::Drawing::Point(1070, 735);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(57, 47);
			this->button21->TabIndex = 15;
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(1070, 612);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(57, 47);
			this->button18->TabIndex = 15;
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(1070, 506);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(57, 47);
			this->button15->TabIndex = 15;
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(1056, 390);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(57, 47);
			this->button12->TabIndex = 15;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.Image")));
			this->button20->Location = System::Drawing::Point(951, 735);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(57, 47);
			this->button20->TabIndex = 14;
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(269, 750);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(57, 47);
			this->button9->TabIndex = 15;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(951, 612);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(57, 47);
			this->button17->TabIndex = 14;
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(256, 519);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(57, 47);
			this->button6->TabIndex = 15;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(951, 506);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(57, 47);
			this->button14->TabIndex = 14;
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(205, 343);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(57, 47);
			this->button3->TabIndex = 15;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(937, 390);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(57, 47);
			this->button11->TabIndex = 14;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(1304, 231);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(57, 47);
			this->button10->TabIndex = 13;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &mix::button01_Click);
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(301, 688);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(57, 47);
			this->button8->TabIndex = 14;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(111, 688);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(57, 47);
			this->button7->TabIndex = 13;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &mix::button01_Click);
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(278, 466);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(57, 47);
			this->button5->TabIndex = 14;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(86, 466);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(57, 47);
			this->button4->TabIndex = 13;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &mix::button01_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(269, 281);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(57, 47);
			this->button2->TabIndex = 14;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(99, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(57, 47);
			this->button1->TabIndex = 13;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mix::button01_Click);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox4->Location = System::Drawing::Point(802, 194);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(597, 639);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = resources->GetString(L"textBox4.Text");
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &mix::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
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
			// GoBack
			// 
			this->GoBack->Location = System::Drawing::Point(44, 858);
			this->GoBack->Name = L"GoBack";
			this->GoBack->Size = System::Drawing::Size(172, 56);
			this->GoBack->TabIndex = 3;
			this->GoBack->Text = L"PREVIOUS";
			this->GoBack->UseVisualStyleBackColor = true;
			this->GoBack->Click += gcnew System::EventHandler(this, &mix::GoBack_Click_1);
			// 
			// buttonnext
			// 
			this->buttonnext->Location = System::Drawing::Point(1572, 858);
			this->buttonnext->Name = L"buttonnext";
			this->buttonnext->Size = System::Drawing::Size(172, 56);
			this->buttonnext->TabIndex = 1;
			this->buttonnext->Text = L"NEXT\r\n";
			this->buttonnext->UseVisualStyleBackColor = true;
			this->buttonnext->Click += gcnew System::EventHandler(this, &mix::buttonnext_Click);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
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
			this->textb1->Enabled = false;
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
	public: bool switchToformtone = false;
	public: bool switchToformLy = false;
	private: System::Void mix_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void GoBack_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void GoBack_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		switchToformtone = true;
	}
private: System::Void button01_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void buttonnext_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	switchToformLy = true;
}
};
}