#pragma once

namespace pinyin {

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



































	private: System::Windows::Forms::TreeView^ treeView1;



























	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ NEXT;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
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
	private: System::Windows::Forms::Button^ button23;

	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;



















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
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->NEXT = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
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
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox1->Name = L"textBox1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// treeView1
			// 
			resources->ApplyResources(this->treeView1, L"treeView1");
			this->treeView1->Name = L"treeView1";
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
			// 
			// textBox6
			// 
			resources->ApplyResources(this->textBox6, L"textBox6");
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox6->Name = L"textBox6";
			// 
			// textBox9
			// 
			resources->ApplyResources(this->textBox9, L"textBox9");
			this->textBox9->BackColor = System::Drawing::Color::White;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox9->Name = L"textBox9";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox10
			// 
			resources->ApplyResources(this->textBox10, L"textBox10");
			this->textBox10->BackColor = System::Drawing::Color::White;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox10->Name = L"textBox10";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox11
			// 
			resources->ApplyResources(this->textBox11, L"textBox11");
			this->textBox11->BackColor = System::Drawing::Color::White;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox11->Name = L"textBox11";
			// 
			// textBox12
			// 
			resources->ApplyResources(this->textBox12, L"textBox12");
			this->textBox12->BackColor = System::Drawing::Color::White;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox12->Name = L"textBox12";
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged_1);
			// 
			// textBox13
			// 
			resources->ApplyResources(this->textBox13, L"textBox13");
			this->textBox13->BackColor = System::Drawing::Color::White;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox13->Name = L"textBox13";
			// 
			// textBox14
			// 
			resources->ApplyResources(this->textBox14, L"textBox14");
			this->textBox14->BackColor = System::Drawing::Color::White;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox14->ForeColor = System::Drawing::Color::OrangeRed;
			this->textBox14->Name = L"textBox14";
			// 
			// progressBar1
			// 
			resources->ApplyResources(this->progressBar1, L"progressBar1");
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// NEXT
			// 
			resources->ApplyResources(this->NEXT, L"NEXT");
			this->NEXT->Name = L"NEXT";
			this->NEXT->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			resources->ApplyResources(this->button8, L"button8");
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			resources->ApplyResources(this->button9, L"button9");
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			resources->ApplyResources(this->button10, L"button10");
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Name = L"button10";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			resources->ApplyResources(this->button11, L"button11");
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->ForeColor = System::Drawing::SystemColors::Control;
			this->button11->Name = L"button11";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			resources->ApplyResources(this->button6, L"button6");
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			resources->ApplyResources(this->button7, L"button7");
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			resources->ApplyResources(this->button12, L"button12");
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->ForeColor = System::Drawing::SystemColors::Control;
			this->button12->Name = L"button12";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			resources->ApplyResources(this->button13, L"button13");
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->ForeColor = System::Drawing::SystemColors::Control;
			this->button13->Name = L"button13";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			resources->ApplyResources(this->button14, L"button14");
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->ForeColor = System::Drawing::SystemColors::Control;
			this->button14->Name = L"button14";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			resources->ApplyResources(this->button15, L"button15");
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->ForeColor = System::Drawing::SystemColors::Control;
			this->button15->Name = L"button15";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			resources->ApplyResources(this->button16, L"button16");
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->ForeColor = System::Drawing::SystemColors::Control;
			this->button16->Name = L"button16";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			resources->ApplyResources(this->button17, L"button17");
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->ForeColor = System::Drawing::SystemColors::Control;
			this->button17->Name = L"button17";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			resources->ApplyResources(this->button18, L"button18");
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->ForeColor = System::Drawing::SystemColors::Control;
			this->button18->Name = L"button18";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			resources->ApplyResources(this->button19, L"button19");
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->ForeColor = System::Drawing::SystemColors::Control;
			this->button19->Name = L"button19";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			resources->ApplyResources(this->button20, L"button20");
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->ForeColor = System::Drawing::SystemColors::Control;
			this->button20->Name = L"button20";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			resources->ApplyResources(this->button21, L"button21");
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->ForeColor = System::Drawing::SystemColors::Control;
			this->button21->Name = L"button21";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			resources->ApplyResources(this->button22, L"button22");
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->ForeColor = System::Drawing::SystemColors::Control;
			this->button22->Name = L"button22";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			resources->ApplyResources(this->button23, L"button23");
			this->button23->BackColor = System::Drawing::Color::White;
			this->button23->ForeColor = System::Drawing::SystemColors::Control;
			this->button23->Name = L"button23";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button29
			// 
			resources->ApplyResources(this->button29, L"button29");
			this->button29->BackColor = System::Drawing::Color::White;
			this->button29->ForeColor = System::Drawing::SystemColors::Control;
			this->button29->Name = L"button29";
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			resources->ApplyResources(this->button28, L"button28");
			this->button28->BackColor = System::Drawing::Color::White;
			this->button28->ForeColor = System::Drawing::SystemColors::Control;
			this->button28->Name = L"button28";
			this->button28->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			resources->ApplyResources(this->button27, L"button27");
			this->button27->BackColor = System::Drawing::Color::White;
			this->button27->ForeColor = System::Drawing::SystemColors::Control;
			this->button27->Name = L"button27";
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button26
			// 
			resources->ApplyResources(this->button26, L"button26");
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->ForeColor = System::Drawing::SystemColors::Control;
			this->button26->Name = L"button26";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			resources->ApplyResources(this->button25, L"button25");
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->ForeColor = System::Drawing::SystemColors::Control;
			this->button25->Name = L"button25";
			this->button25->UseVisualStyleBackColor = false;
			// 
			// button34
			// 
			resources->ApplyResources(this->button34, L"button34");
			this->button34->BackColor = System::Drawing::Color::White;
			this->button34->ForeColor = System::Drawing::SystemColors::Control;
			this->button34->Name = L"button34";
			this->button34->UseVisualStyleBackColor = false;
			// 
			// button35
			// 
			resources->ApplyResources(this->button35, L"button35");
			this->button35->BackColor = System::Drawing::Color::White;
			this->button35->ForeColor = System::Drawing::SystemColors::Control;
			this->button35->Name = L"button35";
			this->button35->UseVisualStyleBackColor = false;
			// 
			// button36
			// 
			resources->ApplyResources(this->button36, L"button36");
			this->button36->BackColor = System::Drawing::Color::White;
			this->button36->ForeColor = System::Drawing::SystemColors::Control;
			this->button36->Name = L"button36";
			this->button36->UseVisualStyleBackColor = false;
			// 
			// button37
			// 
			resources->ApplyResources(this->button37, L"button37");
			this->button37->BackColor = System::Drawing::Color::White;
			this->button37->ForeColor = System::Drawing::SystemColors::Control;
			this->button37->Name = L"button37";
			this->button37->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			resources->ApplyResources(this->button30, L"button30");
			this->button30->BackColor = System::Drawing::Color::White;
			this->button30->ForeColor = System::Drawing::SystemColors::Control;
			this->button30->Name = L"button30";
			this->button30->UseVisualStyleBackColor = false;
			// 
			// button31
			// 
			resources->ApplyResources(this->button31, L"button31");
			this->button31->BackColor = System::Drawing::Color::White;
			this->button31->ForeColor = System::Drawing::SystemColors::Control;
			this->button31->Name = L"button31";
			this->button31->UseVisualStyleBackColor = false;
			// 
			// button32
			// 
			resources->ApplyResources(this->button32, L"button32");
			this->button32->BackColor = System::Drawing::Color::White;
			this->button32->ForeColor = System::Drawing::SystemColors::Control;
			this->button32->Name = L"button32";
			this->button32->UseVisualStyleBackColor = false;
			// 
			// button33
			// 
			resources->ApplyResources(this->button33, L"button33");
			this->button33->BackColor = System::Drawing::Color::White;
			this->button33->ForeColor = System::Drawing::SystemColors::Control;
			this->button33->Name = L"button33";
			this->button33->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->NEXT);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->treeView1);
			this->Name = L"MyForm";
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
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}