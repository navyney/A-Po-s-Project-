﻿#pragma once

namespace v {

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
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(443, 945);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(1000, 35);
			this->progressBar1->TabIndex = 45;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 36));
			this->textBox6->Location = System::Drawing::Point(1443, 194);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(280, 253);
			this->textBox6->TabIndex = 44;
			this->textBox6->Text = L"ü วี\r\nüe อวีย\r\nüan อเวียน\r\nün อวิน";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 36));
			this->textBox5->Location = System::Drawing::Point(1091, 194);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(269, 584);
			this->textBox5->TabIndex = 43;
			this->textBox5->Text = L"u อู\r\nua อา\r\nuo อัว\r\nui อุย\r\nuai อไว\r\nuan อวน\r\nun อุน\r\nuang อวง\r\nueng เวิง";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 36));
			this->textBox4->Location = System::Drawing::Point(736, 194);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(287, 649);
			this->textBox4->TabIndex = 42;
			this->textBox4->Text = L"i อี\r\nia เอีย\r\niao เอียว\r\nie อีเย\r\niu ยิว\r\nian เอียน\r\niang เอียง\r\nin อิน\r\ning อิง"
				L"\r\niong อี-โอง";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 36));
			this->textBox3->Location = System::Drawing::Point(464, 194);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(216, 323);
			this->textBox3->TabIndex = 41;
			this->textBox3->Text = L"e เออ\r\nei เอย\r\nen เอิน\r\neng เอิง\r\ner เออร์";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 36));
			this->textBox2->Location = System::Drawing::Point(200, 553);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 201);
			this->textBox2->TabIndex = 40;
			this->textBox2->Text = L"o โอ\r\nong อง\r\nou โอว";
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->AutoSize = true;
			this->button9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button9->Location = System::Drawing::Point(1571, 898);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->MaximumSize = System::Drawing::Size(533, 246);
			this->button9->MinimumSize = System::Drawing::Size(181, 74);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(320, 132);
			this->button9->TabIndex = 39;
			this->button9->Text = L"Next";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->AutoSize = true;
			this->button8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button8->Location = System::Drawing::Point(13, 898);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->MaximumSize = System::Drawing::Size(533, 246);
			this->button8->MinimumSize = System::Drawing::Size(181, 74);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(320, 132);
			this->button8->TabIndex = 38;
			this->button8->Text = L"Previous";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 36));
			this->textBox1->Location = System::Drawing::Point(200, 194);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 323);
			this->textBox1->TabIndex = 37;
			this->textBox1->Text = L"a อา\r\nai อาย\r\nao เอา\r\nan อัน\r\nang อัง";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48));
			this->label2->Location = System::Drawing::Point(216, 91);
			this->label2->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 68);
			this->label2->TabIndex = 36;
			this->label2->Text = L"สระ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 56));
			this->label1->Location = System::Drawing::Point(25, 11);
			this->label1->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(566, 80);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Lesson 0 : pin yin";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1030);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
