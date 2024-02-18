#pragma once

namespace numbertable {

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
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;


	protected:

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->Controls->Add(this->label11, 8, 0);
			this->tableLayoutPanel1->Controls->Add(this->label10, 7, 0);
			this->tableLayoutPanel1->Controls->Add(this->label9, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label12, 9, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(205, 243);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1409, 591);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->AutoSize = true;
			this->button8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button8->Location = System::Drawing::Point(-88, 1329);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->MaximumSize = System::Drawing::Size(533, 246);
			this->button8->MinimumSize = System::Drawing::Size(181, 74);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(320, 132);
			this->button8->TabIndex = 28;
			this->button8->Text = L"Previous";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->AutoSize = true;
			this->button9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20));
			this->button9->Location = System::Drawing::Point(2345, 1329);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->MaximumSize = System::Drawing::Size(533, 246);
			this->button9->MinimumSize = System::Drawing::Size(181, 74);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(320, 132);
			this->button9->TabIndex = 29;
			this->button9->Text = L"Next";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(442, 944);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(1000, 35);
			this->progressBar1->TabIndex = 35;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 56));
			this->label1->Location = System::Drawing::Point(25, 9);
			this->label1->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1084, 125);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Lesson 1 : vocabulary";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48));
			this->label2->Location = System::Drawing::Point(253, 134);
			this->label2->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(595, 106);
			this->label2->TabIndex = 37;
			this->label2->Text = L"table number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 85);
			this->label3->TabIndex = 0;
			this->label3->Text = L"1";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(171, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 85);
			this->label4->TabIndex = 1;
			this->label4->Text = L"2";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(310, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 85);
			this->label5->TabIndex = 2;
			this->label5->Text = L"3";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(457, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 85);
			this->label6->TabIndex = 3;
			this->label6->Text = L"4";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(588, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 85);
			this->label7->TabIndex = 4;
			this->label7->Text = L"5";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(732, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 85);
			this->label8->TabIndex = 5;
			this->label8->Text = L"6";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(872, 31);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(81, 85);
			this->label9->TabIndex = 6;
			this->label9->Text = L"7";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(1012, 30);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 85);
			this->label10->TabIndex = 7;
			this->label10->Text = L"8";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(1150, 32);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 85);
			this->label11->TabIndex = 8;
			this->label11->Text = L"9";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(1274, 34);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(125, 85);
			this->label12->TabIndex = 9;
			this->label12->Text = L"10";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1018);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
