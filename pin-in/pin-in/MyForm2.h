#pragma once

namespace Project0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox2;






































	private: System::Windows::Forms::ProgressBar^ progressBar1;







	private: System::Windows::Forms::TextBox^ textBox4;















	private: System::Windows::Forms::Button^ NEXT;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button22;













	protected:






	protected:

	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->NEXT = (gcnew System::Windows::Forms::Button());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox1->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox1->Location = System::Drawing::Point(107, 93);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(526, 71);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"lesson 0 : Pinyin";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox2->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox2->Location = System::Drawing::Point(107, 306);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(725, 623);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"\r\n1)   m  มัว   +   a  อา \r\n\r\n\r\n =    ma   มา  \r\n\r\n2)   x  ซี   +   ian  เอียน\r\n\r"
				L"\n\r\n =   xian   เซียน\r\n\r\n3)   sh  ซรือ   +  ang  อัง\r\n\r\n\r\n =   shang   ชัง";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(882, 911);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(692, 63);
			this->progressBar1->TabIndex = 36;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox4->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox4->Location = System::Drawing::Point(868, 306);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(725, 595);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"\r\n  อันนี้เป็นตัวอย่างการผสมเสียง  ?  er   \r\n\r\n   ?? hu? + er = hu?r    \r\n\r\n\r\n   "
				L"?? zh? + er = zh?r\r\n\r\n\r\n   ?? n? +  er = n?r\r\n\r\n\r\n   ?? w?n + er = w?nr\r\n";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// NEXT
			// 
			this->NEXT->Location = System::Drawing::Point(1621, 899);
			this->NEXT->Name = L"NEXT";
			this->NEXT->Size = System::Drawing::Size(189, 63);
			this->NEXT->TabIndex = 57;
			this->NEXT->Text = L"NEXT";
			this->NEXT->UseVisualStyleBackColor = true;
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(52, 47);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(1801, 947);
			this->treeView1->TabIndex = 58;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox3->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox3->Location = System::Drawing::Point(107, 210);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(321, 71);
			this->textBox3->TabIndex = 59;
			this->textBox3->Text = L"หลักการผสมเสียง";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->ForeColor = System::Drawing::SystemColors::Control;
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button11->Location = System::Drawing::Point(226, 401);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(73, 46);
			this->button11->TabIndex = 62;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button2->Location = System::Drawing::Point(383, 401);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 46);
			this->button2->TabIndex = 63;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button1->Location = System::Drawing::Point(444, 468);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 46);
			this->button1->TabIndex = 64;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button3->Location = System::Drawing::Point(226, 594);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 46);
			this->button3->TabIndex = 62;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button4->Location = System::Drawing::Point(383, 594);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 46);
			this->button4->TabIndex = 63;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button5->Location = System::Drawing::Point(444, 661);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(73, 46);
			this->button5->TabIndex = 64;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button6->Location = System::Drawing::Point(226, 791);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(73, 46);
			this->button6->TabIndex = 62;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button7->Location = System::Drawing::Point(383, 791);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(73, 46);
			this->button7->TabIndex = 63;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button8->Location = System::Drawing::Point(444, 855);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(73, 46);
			this->button8->TabIndex = 64;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button9->Location = System::Drawing::Point(984, 468);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(73, 46);
			this->button9->TabIndex = 62;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button10->Location = System::Drawing::Point(1141, 468);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(73, 46);
			this->button10->TabIndex = 63;
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->ForeColor = System::Drawing::SystemColors::Control;
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button12->Location = System::Drawing::Point(984, 585);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(73, 46);
			this->button12->TabIndex = 62;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->ForeColor = System::Drawing::SystemColors::Control;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button13->Location = System::Drawing::Point(1141, 585);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(73, 46);
			this->button13->TabIndex = 63;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->ForeColor = System::Drawing::SystemColors::Control;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button14->Location = System::Drawing::Point(984, 706);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(73, 46);
			this->button14->TabIndex = 62;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->ForeColor = System::Drawing::SystemColors::Control;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button15->Location = System::Drawing::Point(1141, 706);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(73, 46);
			this->button15->TabIndex = 63;
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->ForeColor = System::Drawing::SystemColors::Control;
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button16->Location = System::Drawing::Point(984, 823);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(73, 46);
			this->button16->TabIndex = 62;
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->ForeColor = System::Drawing::SystemColors::Control;
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button17->Location = System::Drawing::Point(1141, 823);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(73, 46);
			this->button17->TabIndex = 63;
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->ForeColor = System::Drawing::SystemColors::Control;
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button18->Location = System::Drawing::Point(1410, 346);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(73, 46);
			this->button18->TabIndex = 65;
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->ForeColor = System::Drawing::SystemColors::Control;
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button19->Location = System::Drawing::Point(1270, 468);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(73, 46);
			this->button19->TabIndex = 66;
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->ForeColor = System::Drawing::SystemColors::Control;
			this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button20->Location = System::Drawing::Point(1270, 585);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(73, 46);
			this->button20->TabIndex = 66;
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->ForeColor = System::Drawing::SystemColors::Control;
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button21->Location = System::Drawing::Point(1270, 706);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(73, 46);
			this->button21->TabIndex = 66;
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->ForeColor = System::Drawing::SystemColors::Control;
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.Image")));
			this->button22->Location = System::Drawing::Point(1270, 823);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(73, 46);
			this->button22->TabIndex = 66;
			this->button22->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->NEXT);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->treeView1);
			this->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void button0b_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}