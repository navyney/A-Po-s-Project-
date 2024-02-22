#pragma once

namespace vocab2 {

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
		int numpage2 = 1;
	public:
		MyForm(void)
		{
			InitializeComponent();
			changepage(numpage2);
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
	private: System::Windows::Forms::Label^ label7;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ previous;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ next;
	private: System::Windows::Forms::ProgressBar^ progressBar1;

	protected:

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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->previous = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->next = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(670, 697);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(207, 39);
			this->label7->TabIndex = 92;
			this->label7->Text = L"คุณรู้จักคนคนนี้มั้ย";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(670, 646);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(330, 39);
			this->label6->TabIndex = 91;
			this->label6->Text = L"Nǐrènshizhègerénma";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(670, 598);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(289, 39);
			this->label5->TabIndex = 90;
			this->label5->Text = L"你认识这个人吗？";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
			this->label4->Location = System::Drawing::Point(710, 414);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 46);
			this->label4->TabIndex = 88;
			this->label4->Text = L"คุณ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 32));
			this->label3->Location = System::Drawing::Point(710, 368);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 46);
			this->label3->TabIndex = 87;
			this->label3->Text = L"nǐ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(687, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 102);
			this->label2->TabIndex = 86;
			this->label2->Text = L"你";
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->AutoSize = true;
			this->button8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button8->Location = System::Drawing::Point(173, 1181);
			this->button8->MaximumSize = System::Drawing::Size(400, 200);
			this->button8->MinimumSize = System::Drawing::Size(136, 60);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(240, 107);
			this->button8->TabIndex = 80;
			this->button8->Text = L"Previous";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// previous
			// 
			this->previous->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->previous->AutoSize = true;
			this->previous->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->previous->Location = System::Drawing::Point(12, 897);
			this->previous->MaximumSize = System::Drawing::Size(400, 200);
			this->previous->MinimumSize = System::Drawing::Size(136, 60);
			this->previous->Name = L"previous";
			this->previous->Size = System::Drawing::Size(320, 132);
			this->previous->TabIndex = 83;
			this->previous->Text = L"Previous";
			this->previous->UseVisualStyleBackColor = true;
			this->previous->Click += gcnew System::EventHandler(this, &MyForm::previous_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 56));
			this->label1->Location = System::Drawing::Point(19, 7);
			this->label1->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(691, 80);
			this->label1->TabIndex = 82;
			this->label1->Text = L"Lesson 2 : vocabulary";
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->AutoSize = true;
			this->button9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button9->Location = System::Drawing::Point(1998, 1181);
			this->button9->MaximumSize = System::Drawing::Size(400, 200);
			this->button9->MinimumSize = System::Drawing::Size(136, 60);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(240, 107);
			this->button9->TabIndex = 81;
			this->button9->Text = L"Next";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// next
			// 
			this->next->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->next->AutoSize = true;
			this->next->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->next->Location = System::Drawing::Point(1572, 897);
			this->next->MaximumSize = System::Drawing::Size(400, 200);
			this->next->MinimumSize = System::Drawing::Size(136, 60);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(320, 132);
			this->next->TabIndex = 85;
			this->next->Text = L"Next";
			this->next->UseVisualStyleBackColor = true;
			this->next->Click += gcnew System::EventHandler(this, &MyForm::next_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(473, 955);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(1000, 35);
			this->progressBar1->TabIndex = 84;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->previous);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->next);
			this->Controls->Add(this->progressBar1);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1030);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void changepage(int numpage2) {
		switch (numpage2) {
		case 1:
			label2->Text = L"你";
			label3->Text = L"nǐ";
			label4->Text = L"คุณ";
			label5->Text = L"你认识这个人吗？";
			label6->Text = L"Nǐrènshizhègerénma";
			label7->Text = L"คุณรู้จักคนคนนี้มั้ย";
			break;
		case 2:
			label2->Text = L"我";
			label3->Text = L"wǒ";
			label4->Text = L"ฉัน";
			label5->Text = L"我不知道。";
			label6->Text = L"wǒ bùzhīdào";
			label7->Text = L"ฉันไม่รู้";
			break;
		}
	}
	private: System::Void next_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numpage2 < 2) {
			numpage2++;
			changepage(numpage2);

		}
	}
private: System::Void previous_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numpage2 > 1) {
		numpage2--;
		changepage(numpage2);

	}
}
};
}
