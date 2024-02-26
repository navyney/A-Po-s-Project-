#pragma once

namespace nextpage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm1
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


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ nextbutton;
	private: System::Windows::Forms::PictureBox^ previousbutton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ decorleft;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lesson3;
	private: System::Windows::Forms::Button^ asound;
	private: System::Windows::Forms::Button^ aisound;
	private: System::Windows::Forms::Button^ aosound;
	private: System::Windows::Forms::Button^ ansound;
	private: System::Windows::Forms::Button^ angsound;
	private: System::Windows::Forms::Button^ osound;
	private: System::Windows::Forms::Button^ ongsoung;
	private: System::Windows::Forms::Button^ ousound;
	private: System::Windows::Forms::Button^ esound;
	private: System::Windows::Forms::Button^ eisound;
	private: System::Windows::Forms::Button^ ensound;
	private: System::Windows::Forms::Button^ engsound;
	private: System::Windows::Forms::Button^ ersound;
	private: System::Windows::Forms::Button^ üsound;
	private: System::Windows::Forms::Button^ üesound;
	private: System::Windows::Forms::Button^ üansound;
	private: System::Windows::Forms::Button^ ünsound;
	private: System::Windows::Forms::Button^ isound;
	private: System::Windows::Forms::Button^ iasound;
	private: System::Windows::Forms::Button^ iaosound;
	private: System::Windows::Forms::Button^ iesound;
	private: System::Windows::Forms::Button^ iusound;
	private: System::Windows::Forms::Button^ iansound;
	private: System::Windows::Forms::Button^ iangsound;
	private: System::Windows::Forms::Button^ insound;
	private: System::Windows::Forms::Button^ ingsound;
	private: System::Windows::Forms::Button^ iongsound;
	private: System::Windows::Forms::Button^ usound;
	private: System::Windows::Forms::Button^ uasound;
	private: System::Windows::Forms::Button^ uosound;
	private: System::Windows::Forms::Button^ uisound;
	private: System::Windows::Forms::Button^ uaisound;
	private: System::Windows::Forms::Button^ uansound;
	private: System::Windows::Forms::Button^ unsound;





































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->nextbutton = (gcnew System::Windows::Forms::PictureBox());
			this->previousbutton = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->decorleft = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lesson3 = (gcnew System::Windows::Forms::Label());
			this->asound = (gcnew System::Windows::Forms::Button());
			this->aisound = (gcnew System::Windows::Forms::Button());
			this->aosound = (gcnew System::Windows::Forms::Button());
			this->ansound = (gcnew System::Windows::Forms::Button());
			this->angsound = (gcnew System::Windows::Forms::Button());
			this->osound = (gcnew System::Windows::Forms::Button());
			this->ongsoung = (gcnew System::Windows::Forms::Button());
			this->ousound = (gcnew System::Windows::Forms::Button());
			this->esound = (gcnew System::Windows::Forms::Button());
			this->eisound = (gcnew System::Windows::Forms::Button());
			this->ensound = (gcnew System::Windows::Forms::Button());
			this->engsound = (gcnew System::Windows::Forms::Button());
			this->ersound = (gcnew System::Windows::Forms::Button());
			this->üsound = (gcnew System::Windows::Forms::Button());
			this->üesound = (gcnew System::Windows::Forms::Button());
			this->üansound = (gcnew System::Windows::Forms::Button());
			this->ünsound = (gcnew System::Windows::Forms::Button());
			this->isound = (gcnew System::Windows::Forms::Button());
			this->iasound = (gcnew System::Windows::Forms::Button());
			this->iaosound = (gcnew System::Windows::Forms::Button());
			this->iesound = (gcnew System::Windows::Forms::Button());
			this->iusound = (gcnew System::Windows::Forms::Button());
			this->iansound = (gcnew System::Windows::Forms::Button());
			this->iangsound = (gcnew System::Windows::Forms::Button());
			this->insound = (gcnew System::Windows::Forms::Button());
			this->ingsound = (gcnew System::Windows::Forms::Button());
			this->iongsound = (gcnew System::Windows::Forms::Button());
			this->usound = (gcnew System::Windows::Forms::Button());
			this->uasound = (gcnew System::Windows::Forms::Button());
			this->uosound = (gcnew System::Windows::Forms::Button());
			this->uisound = (gcnew System::Windows::Forms::Button());
			this->uaisound = (gcnew System::Windows::Forms::Button());
			this->uansound = (gcnew System::Windows::Forms::Button());
			this->unsound = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBox6->Location = System::Drawing::Point(649, 598);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(255, 233);
			this->textBox6->TabIndex = 44;
			this->textBox6->Text = L"ü วี\r\nüe อวีย\r\nüan อเวียน\r\nün อวิน";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBox5->Location = System::Drawing::Point(1244, 290);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(243, 400);
			this->textBox5->TabIndex = 43;
			this->textBox5->Text = L"u อู\r\nua อา\r\nuo อัว\r\nui อุย\r\nuai อไว\r\nuan อวน\r\nun อุน\r\nuang อวง\r\nueng เวิง";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBox4->Location = System::Drawing::Point(928, 290);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(270, 557);
			this->textBox4->TabIndex = 42;
			this->textBox4->Text = L"i อี\r\nia เอีย\r\niao เอียว\r\nie อีเย\r\niu ยิว\r\nian เอียน\r\niang เอียง\r\nin อิน\r\ning อิง"
				L"\r\niong อี-โอง";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBox3->Location = System::Drawing::Point(649, 290);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(221, 283);
			this->textBox3->TabIndex = 41;
			this->textBox3->Text = L"e เออ\r\nei เอย\r\nen เอิน\r\neng เอิง\r\ner เออร์";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBox2->Location = System::Drawing::Point(405, 598);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(201, 184);
			this->textBox2->TabIndex = 40;
			this->textBox2->Text = L"o โอ\r\nong อง\r\nou โอว";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBox1->Location = System::Drawing::Point(405, 290);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 283);
			this->textBox1->TabIndex = 37;
			this->textBox1->Text = L"a อา\r\nai อาย\r\nao เอา\r\nan อัน\r\nang อัง";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// nextbutton
			// 
			this->nextbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextbutton.BackgroundImage")));
			this->nextbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nextbutton->Location = System::Drawing::Point(1584, 897);
			this->nextbutton->Name = L"nextbutton";
			this->nextbutton->Size = System::Drawing::Size(282, 133);
			this->nextbutton->TabIndex = 61;
			this->nextbutton->TabStop = false;
			// 
			// previousbutton
			// 
			this->previousbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousbutton.BackgroundImage")));
			this->previousbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->previousbutton->Location = System::Drawing::Point(33, 897);
			this->previousbutton->Name = L"previousbutton";
			this->previousbutton->Size = System::Drawing::Size(300, 130);
			this->previousbutton->TabIndex = 60;
			this->previousbutton->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(1442, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(450, 450);
			this->pictureBox1->TabIndex = 59;
			this->pictureBox1->TabStop = false;
			// 
			// decorleft
			// 
			this->decorleft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"decorleft.BackgroundImage")));
			this->decorleft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->decorleft->Location = System::Drawing::Point(12, 13);
			this->decorleft->Name = L"decorleft";
			this->decorleft->Size = System::Drawing::Size(450, 450);
			this->decorleft->TabIndex = 58;
			this->decorleft->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(443, 946);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(1000, 35);
			this->progressBar1->TabIndex = 57;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label2->Location = System::Drawing::Point(904, 160);
			this->label2->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 82);
			this->label2->TabIndex = 56;
			this->label2->Text = L"สระ";
			// 
			// lesson3
			// 
			this->lesson3->AutoSize = true;
			this->lesson3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 87.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lesson3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->lesson3->Location = System::Drawing::Point(470, 10);
			this->lesson3->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
			this->lesson3->Name = L"lesson3";
			this->lesson3->Size = System::Drawing::Size(973, 150);
			this->lesson3->TabIndex = 55;
			this->lesson3->Text = L"Lesson 0 : pinyin";
			// 
			// asound
			// 
			this->asound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"asound.BackgroundImage")));
			this->asound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->asound->Location = System::Drawing::Point(504, 305);
			this->asound->Name = L"asound";
			this->asound->Size = System::Drawing::Size(40, 40);
			this->asound->TabIndex = 88;
			this->asound->UseVisualStyleBackColor = true;
			// 
			// aisound
			// 
			this->aisound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aisound.BackgroundImage")));
			this->aisound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->aisound->Location = System::Drawing::Point(539, 360);
			this->aisound->Name = L"aisound";
			this->aisound->Size = System::Drawing::Size(40, 40);
			this->aisound->TabIndex = 89;
			this->aisound->UseVisualStyleBackColor = true;
			this->aisound->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// aosound
			// 
			this->aosound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aosound.BackgroundImage")));
			this->aosound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->aosound->Location = System::Drawing::Point(542, 414);
			this->aosound->Name = L"aosound";
			this->aosound->Size = System::Drawing::Size(40, 40);
			this->aosound->TabIndex = 90;
			this->aosound->UseVisualStyleBackColor = true;
			// 
			// ansound
			// 
			this->ansound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ansound.BackgroundImage")));
			this->ansound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ansound->Location = System::Drawing::Point(542, 469);
			this->ansound->Name = L"ansound";
			this->ansound->Size = System::Drawing::Size(40, 40);
			this->ansound->TabIndex = 91;
			this->ansound->UseVisualStyleBackColor = true;
			// 
			// angsound
			// 
			this->angsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"angsound.BackgroundImage")));
			this->angsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->angsound->Location = System::Drawing::Point(551, 524);
			this->angsound->Name = L"angsound";
			this->angsound->Size = System::Drawing::Size(40, 40);
			this->angsound->TabIndex = 92;
			this->angsound->UseVisualStyleBackColor = true;
			// 
			// osound
			// 
			this->osound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"osound.BackgroundImage")));
			this->osound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->osound->Location = System::Drawing::Point(504, 609);
			this->osound->Name = L"osound";
			this->osound->Size = System::Drawing::Size(40, 40);
			this->osound->TabIndex = 93;
			this->osound->UseVisualStyleBackColor = true;
			// 
			// ongsoung
			// 
			this->ongsoung->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ongsoung.BackgroundImage")));
			this->ongsoung->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ongsoung->Location = System::Drawing::Point(551, 668);
			this->ongsoung->Name = L"ongsoung";
			this->ongsoung->Size = System::Drawing::Size(40, 40);
			this->ongsoung->TabIndex = 94;
			this->ongsoung->UseVisualStyleBackColor = true;
			// 
			// ousound
			// 
			this->ousound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ousound.BackgroundImage")));
			this->ousound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ousound->Location = System::Drawing::Point(551, 724);
			this->ousound->Name = L"ousound";
			this->ousound->Size = System::Drawing::Size(40, 40);
			this->ousound->TabIndex = 95;
			this->ousound->UseVisualStyleBackColor = true;
			// 
			// esound
			// 
			this->esound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"esound.BackgroundImage")));
			this->esound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->esound->Location = System::Drawing::Point(764, 305);
			this->esound->Name = L"esound";
			this->esound->Size = System::Drawing::Size(40, 40);
			this->esound->TabIndex = 96;
			this->esound->UseVisualStyleBackColor = true;
			// 
			// eisound
			// 
			this->eisound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eisound.BackgroundImage")));
			this->eisound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->eisound->Location = System::Drawing::Point(776, 360);
			this->eisound->Name = L"eisound";
			this->eisound->Size = System::Drawing::Size(40, 40);
			this->eisound->TabIndex = 97;
			this->eisound->UseVisualStyleBackColor = true;
			// 
			// ensound
			// 
			this->ensound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ensound.BackgroundImage")));
			this->ensound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ensound->Location = System::Drawing::Point(789, 414);
			this->ensound->Name = L"ensound";
			this->ensound->Size = System::Drawing::Size(40, 40);
			this->ensound->TabIndex = 98;
			this->ensound->UseVisualStyleBackColor = true;
			// 
			// engsound
			// 
			this->engsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"engsound.BackgroundImage")));
			this->engsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->engsound->Location = System::Drawing::Point(804, 469);
			this->engsound->Name = L"engsound";
			this->engsound->Size = System::Drawing::Size(40, 40);
			this->engsound->TabIndex = 99;
			this->engsound->UseVisualStyleBackColor = true;
			// 
			// ersound
			// 
			this->ersound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ersound.BackgroundImage")));
			this->ersound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ersound->Location = System::Drawing::Point(804, 524);
			this->ersound->Name = L"ersound";
			this->ersound->Size = System::Drawing::Size(40, 40);
			this->ersound->TabIndex = 100;
			this->ersound->UseVisualStyleBackColor = true;
			// 
			// üsound
			// 
			this->üsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"üsound.BackgroundImage")));
			this->üsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->üsound->Location = System::Drawing::Point(732, 609);
			this->üsound->Name = L"üsound";
			this->üsound->Size = System::Drawing::Size(40, 40);
			this->üsound->TabIndex = 101;
			this->üsound->UseVisualStyleBackColor = true;
			// 
			// üesound
			// 
			this->üesound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"üesound.BackgroundImage")));
			this->üesound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->üesound->Location = System::Drawing::Point(789, 668);
			this->üesound->Name = L"üesound";
			this->üesound->Size = System::Drawing::Size(40, 40);
			this->üesound->TabIndex = 102;
			this->üesound->UseVisualStyleBackColor = true;
			// 
			// üansound
			// 
			this->üansound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"üansound.BackgroundImage")));
			this->üansound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->üansound->Location = System::Drawing::Point(849, 724);
			this->üansound->Name = L"üansound";
			this->üansound->Size = System::Drawing::Size(40, 40);
			this->üansound->TabIndex = 103;
			this->üansound->UseVisualStyleBackColor = true;
			// 
			// ünsound
			// 
			this->ünsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ünsound.BackgroundImage")));
			this->ünsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ünsound->Location = System::Drawing::Point(804, 775);
			this->ünsound->Name = L"ünsound";
			this->ünsound->Size = System::Drawing::Size(40, 40);
			this->ünsound->TabIndex = 104;
			this->ünsound->UseVisualStyleBackColor = true;
			// 
			// isound
			// 
			this->isound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"isound.BackgroundImage")));
			this->isound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->isound->Location = System::Drawing::Point(997, 305);
			this->isound->Name = L"isound";
			this->isound->Size = System::Drawing::Size(40, 40);
			this->isound->TabIndex = 105;
			this->isound->UseVisualStyleBackColor = true;
			// 
			// iasound
			// 
			this->iasound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iasound.BackgroundImage")));
			this->iasound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->iasound->Location = System::Drawing::Point(1051, 360);
			this->iasound->Name = L"iasound";
			this->iasound->Size = System::Drawing::Size(40, 40);
			this->iasound->TabIndex = 106;
			this->iasound->UseVisualStyleBackColor = true;
			// 
			// iaosound
			// 
			this->iaosound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iaosound.BackgroundImage")));
			this->iaosound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->iaosound->Location = System::Drawing::Point(1095, 414);
			this->iaosound->Name = L"iaosound";
			this->iaosound->Size = System::Drawing::Size(40, 40);
			this->iaosound->TabIndex = 107;
			this->iaosound->UseVisualStyleBackColor = true;
			// 
			// iesound
			// 
			this->iesound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iesound.BackgroundImage")));
			this->iesound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->iesound->Location = System::Drawing::Point(1051, 469);
			this->iesound->Name = L"iesound";
			this->iesound->Size = System::Drawing::Size(40, 40);
			this->iesound->TabIndex = 108;
			this->iesound->UseVisualStyleBackColor = true;
			// 
			// iusound
			// 
			this->iusound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iusound.BackgroundImage")));
			this->iusound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->iusound->Location = System::Drawing::Point(1051, 524);
			this->iusound->Name = L"iusound";
			this->iusound->Size = System::Drawing::Size(40, 40);
			this->iusound->TabIndex = 109;
			this->iusound->UseVisualStyleBackColor = true;
			// 
			// iansound
			// 
			this->iansound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iansound.BackgroundImage")));
			this->iansound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->iansound->Location = System::Drawing::Point(1095, 581);
			this->iansound->Name = L"iansound";
			this->iansound->Size = System::Drawing::Size(40, 40);
			this->iansound->TabIndex = 110;
			this->iansound->UseVisualStyleBackColor = true;
			// 
			// iangsound
			// 
			this->iangsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iangsound.BackgroundImage")));
			this->iangsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->iangsound->Location = System::Drawing::Point(1117, 637);
			this->iangsound->Name = L"iangsound";
			this->iangsound->Size = System::Drawing::Size(40, 40);
			this->iangsound->TabIndex = 111;
			this->iangsound->UseVisualStyleBackColor = true;
			// 
			// insound
			// 
			this->insound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"insound.BackgroundImage")));
			this->insound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->insound->Location = System::Drawing::Point(1051, 688);
			this->insound->Name = L"insound";
			this->insound->Size = System::Drawing::Size(40, 40);
			this->insound->TabIndex = 112;
			this->insound->UseVisualStyleBackColor = true;
			// 
			// ingsound
			// 
			this->ingsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ingsound.BackgroundImage")));
			this->ingsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ingsound->Location = System::Drawing::Point(1066, 742);
			this->ingsound->Name = L"ingsound";
			this->ingsound->Size = System::Drawing::Size(40, 40);
			this->ingsound->TabIndex = 113;
			this->ingsound->UseVisualStyleBackColor = true;
			// 
			// iongsound
			// 
			this->iongsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iongsound.BackgroundImage")));
			this->iongsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->iongsound->Location = System::Drawing::Point(1138, 796);
			this->iongsound->Name = L"iongsound";
			this->iongsound->Size = System::Drawing::Size(40, 40);
			this->iongsound->TabIndex = 114;
			this->iongsound->UseVisualStyleBackColor = true;
			// 
			// usound
			// 
			this->usound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"usound.BackgroundImage")));
			this->usound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->usound->Location = System::Drawing::Point(1333, 305);
			this->usound->Name = L"usound";
			this->usound->Size = System::Drawing::Size(40, 40);
			this->usound->TabIndex = 115;
			this->usound->UseVisualStyleBackColor = true;
			// 
			// uasound
			// 
			this->uasound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uasound.BackgroundImage")));
			this->uasound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->uasound->Location = System::Drawing::Point(1367, 360);
			this->uasound->Name = L"uasound";
			this->uasound->Size = System::Drawing::Size(40, 40);
			this->uasound->TabIndex = 116;
			this->uasound->UseVisualStyleBackColor = true;
			// 
			// uosound
			// 
			this->uosound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uosound.BackgroundImage")));
			this->uosound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->uosound->Location = System::Drawing::Point(1367, 414);
			this->uosound->Name = L"uosound";
			this->uosound->Size = System::Drawing::Size(40, 40);
			this->uosound->TabIndex = 117;
			this->uosound->UseVisualStyleBackColor = true;
			// 
			// uisound
			// 
			this->uisound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uisound.BackgroundImage")));
			this->uisound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->uisound->Location = System::Drawing::Point(1357, 469);
			this->uisound->Name = L"uisound";
			this->uisound->Size = System::Drawing::Size(40, 40);
			this->uisound->TabIndex = 118;
			this->uisound->UseVisualStyleBackColor = true;
			// 
			// uaisound
			// 
			this->uaisound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uaisound.BackgroundImage")));
			this->uaisound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->uaisound->Location = System::Drawing::Point(1391, 524);
			this->uaisound->Name = L"uaisound";
			this->uaisound->Size = System::Drawing::Size(40, 40);
			this->uaisound->TabIndex = 119;
			this->uaisound->UseVisualStyleBackColor = true;
			// 
			// uansound
			// 
			this->uansound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uansound.BackgroundImage")));
			this->uansound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->uansound->Location = System::Drawing::Point(1417, 581);
			this->uansound->Name = L"uansound";
			this->uansound->Size = System::Drawing::Size(40, 40);
			this->uansound->TabIndex = 120;
			this->uansound->UseVisualStyleBackColor = true;
			// 
			// unsound
			// 
			this->unsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"unsound.BackgroundImage")));
			this->unsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->unsound->Location = System::Drawing::Point(1377, 637);
			this->unsound->Name = L"unsound";
			this->unsound->Size = System::Drawing::Size(40, 40);
			this->unsound->TabIndex = 121;
			this->unsound->UseVisualStyleBackColor = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->unsound);
			this->Controls->Add(this->uansound);
			this->Controls->Add(this->uaisound);
			this->Controls->Add(this->uisound);
			this->Controls->Add(this->uosound);
			this->Controls->Add(this->uasound);
			this->Controls->Add(this->usound);
			this->Controls->Add(this->iongsound);
			this->Controls->Add(this->ingsound);
			this->Controls->Add(this->insound);
			this->Controls->Add(this->iangsound);
			this->Controls->Add(this->iansound);
			this->Controls->Add(this->iusound);
			this->Controls->Add(this->iesound);
			this->Controls->Add(this->iaosound);
			this->Controls->Add(this->iasound);
			this->Controls->Add(this->isound);
			this->Controls->Add(this->ünsound);
			this->Controls->Add(this->üansound);
			this->Controls->Add(this->üesound);
			this->Controls->Add(this->üsound);
			this->Controls->Add(this->ersound);
			this->Controls->Add(this->engsound);
			this->Controls->Add(this->ensound);
			this->Controls->Add(this->eisound);
			this->Controls->Add(this->esound);
			this->Controls->Add(this->ousound);
			this->Controls->Add(this->ongsoung);
			this->Controls->Add(this->osound);
			this->Controls->Add(this->angsound);
			this->Controls->Add(this->ansound);
			this->Controls->Add(this->aosound);
			this->Controls->Add(this->aisound);
			this->Controls->Add(this->asound);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->nextbutton);
			this->Controls->Add(this->previousbutton);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->decorleft);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lesson3);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1030);
			this->Name = L"MyForm1";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
