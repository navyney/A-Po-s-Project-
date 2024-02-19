#pragma once

namespace nextpage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Panel^ panel1;
























	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Button^ GoBack;
	private: System::Windows::Forms::Button^ buttonnext;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textb1;

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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->GoBack = (gcnew System::Windows::Forms::Button());
			this->buttonnext = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textb1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 36));
			this->textBox6->Location = System::Drawing::Point(414, 527);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(308, 206);
			this->textBox6->TabIndex = 44;
			this->textBox6->Text = L"? วี\r\n?e อวีย\r\n?an อเวียน\r\n?n อวิน";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 36));
			this->textBox5->Location = System::Drawing::Point(836, 196);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(317, 528);
			this->textBox5->TabIndex = 43;
			this->textBox5->Text = L"u อู\r\nua อา\r\nuo อัว\r\nui อุย\r\nuai อไว\r\nuan อวน\r\nun อุน\r\nuang อวง\r\nueng เวิง";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 36));
			this->textBox4->Location = System::Drawing::Point(1257, 196);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(347, 528);
			this->textBox4->TabIndex = 42;
			this->textBox4->Text = L"i อี\r\nia เอีย\r\niao เอียว\r\nie อีเย\r\niu ยิว\r\nian เอียน\r\niang เอียง\r\nin อิน\r\ning อิง"
				L"\r\niong อี-โอง";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 36));
			this->textBox3->Location = System::Drawing::Point(414, 204);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(308, 263);
			this->textBox3->TabIndex = 41;
			this->textBox3->Text = L"e เออ\r\nei เอย\r\nen เอิน\r\neng เอิง\r\ner เออร์";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 36));
			this->textBox2->Location = System::Drawing::Point(63, 560);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(223, 164);
			this->textBox2->TabIndex = 40;
			this->textBox2->Text = L"o โอ\r\nong อง\r\nou โอว";
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->AutoSize = true;
			this->button9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button9->Location = System::Drawing::Point(1587, 837);
			this->button9->MaximumSize = System::Drawing::Size(400, 200);
			this->button9->MinimumSize = System::Drawing::Size(136, 60);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(240, 107);
			this->button9->TabIndex = 39;
			this->button9->Text = L"Next";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->AutoSize = true;
			this->button8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button8->Location = System::Drawing::Point(134, 837);
			this->button8->MaximumSize = System::Drawing::Size(400, 200);
			this->button8->MinimumSize = System::Drawing::Size(136, 60);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(240, 107);
			this->button8->TabIndex = 38;
			this->button8->Text = L"Previous";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 36));
			this->textBox1->Location = System::Drawing::Point(63, 204);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(223, 263);
			this->textBox1->TabIndex = 37;
			this->textBox1->Text = L"a อา\r\nai อาย\r\nao เอา\r\nan อัน\r\nang อัง";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(452, 891);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(923, 53);
			this->progressBar1->TabIndex = 45;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->progressBar2);
			this->panel1->Controls->Add(this->GoBack);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->buttonnext);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textb1);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(53, 58);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1786, 939);
			this->panel1->TabIndex = 46;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(404, 861);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(923, 53);
			this->progressBar2->TabIndex = 10;
			// 
			// GoBack
			// 
			this->GoBack->Location = System::Drawing::Point(44, 858);
			this->GoBack->Name = L"GoBack";
			this->GoBack->Size = System::Drawing::Size(172, 56);
			this->GoBack->TabIndex = 3;
			this->GoBack->Text = L"PREVIOUS";
			this->GoBack->UseVisualStyleBackColor = true;
			this->GoBack->Click += gcnew System::EventHandler(this, &MyForm1::GoBack_Click);
			// 
			// buttonnext
			// 
			this->buttonnext->Location = System::Drawing::Point(1572, 858);
			this->buttonnext->Name = L"buttonnext";
			this->buttonnext->Size = System::Drawing::Size(172, 56);
			this->buttonnext->TabIndex = 1;
			this->buttonnext->Text = L"NEXT\r\n";
			this->buttonnext->UseVisualStyleBackColor = true;
			this->buttonnext->Click += gcnew System::EventHandler(this, &MyForm1::buttonnext_Click);
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox9->Location = System::Drawing::Point(31, 124);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(107, 53);
			this->textBox9->TabIndex = 1;
			this->textBox9->Text = L"  สระ";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox9_TextChanged);
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
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm1";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToform = false;
	public: bool switchToformtone = false;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GoBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	switchToform = true;
}
private: System::Void buttonnext_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	switchToformtone = true;
}
};
}