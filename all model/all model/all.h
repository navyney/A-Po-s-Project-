#pragma once
#include "string"
namespace allmodel {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for all
	/// </summary>
	public ref class all : public System::Windows::Forms::Form
	{
	public:
		all(void)
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
		~all()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;








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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(9, 10);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1409, 820);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 43.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label2->Location = System::Drawing::Point(52, 106);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1061, 67);
			this->label2->TabIndex = 3;
			this->label2->Text = L"??!   This is your online chinese class";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label1->Location = System::Drawing::Point(131, 232);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(488, 44);
			this->label1->TabIndex = 2;
			this->label1->Text = L"plaease choose your lesson";
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(139, 341);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1126, 407);
			this->panel2->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label8->Location = System::Drawing::Point(574, 292);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(522, 82);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Lesson 5 : ";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &all::label8_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label6->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label6->Location = System::Drawing::Point(30, 292);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(522, 82);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Lesson 4 : ";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &all::label6_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label4->Location = System::Drawing::Point(30, 162);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(522, 82);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Lesson 2 : ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &all::label4_Click);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label7->Location = System::Drawing::Point(574, 162);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(522, 82);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Lesson 3 : ";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &all::label7_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label5->Location = System::Drawing::Point(574, 32);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(522, 82);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Lesson 1 : ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &all::label5_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label3->Location = System::Drawing::Point(30, 32);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(522, 82);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Lesson 0 : Pinyin";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &all::label3_Click);
			// 
			// all
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1426, 839);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"all";
			this->Text = L"all";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
