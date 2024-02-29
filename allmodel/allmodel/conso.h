#pragma once

namespace allmodel {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for conso
		/// </summary>
		public ref class conso : public System::Windows::Forms::Form
		{
		public:
			conso(void)
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
			~conso()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::PictureBox^ nextbutton;
		protected:
		private: System::Windows::Forms::PictureBox^ previousbutton;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ decorleft;
		private: System::Windows::Forms::ProgressBar^ progressBar1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ lesson3;
		private: System::Windows::Forms::Button^ fsound;

		private: System::Windows::Forms::Label^ f;

		private: System::Windows::Forms::Button^ msound;
		private: System::Windows::Forms::Label^ m;
		private: System::Windows::Forms::Button^ psound;
		private: System::Windows::Forms::Label^ p;
		private: System::Windows::Forms::Button^ bsound;
		private: System::Windows::Forms::Label^ b;
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::Button^ rsound;
		private: System::Windows::Forms::Label^ r;
		private: System::Windows::Forms::Button^ shsound;
		private: System::Windows::Forms::Label^ sh;
		private: System::Windows::Forms::Button^ chsound;
		private: System::Windows::Forms::Label^ ch;
		private: System::Windows::Forms::Button^ zhsound;
		private: System::Windows::Forms::Label^ zh;
		private: System::Windows::Forms::PictureBox^ pictureBox3;
		private: System::Windows::Forms::Button^ ysound;
		private: System::Windows::Forms::Label^ y;



		private: System::Windows::Forms::Button^ xsound;
		private: System::Windows::Forms::Label^ x;


		private: System::Windows::Forms::Button^ qsound;

		private: System::Windows::Forms::Label^ q;

		private: System::Windows::Forms::Button^ jsound;

		private: System::Windows::Forms::Label^ j;

		private: System::Windows::Forms::PictureBox^ pictureBox4;
		private: System::Windows::Forms::PictureBox^ pictureBox5;
		private: System::Windows::Forms::Button^ button5;
		private: System::Windows::Forms::Label^ g;
		private: System::Windows::Forms::Button^ button6;
		private: System::Windows::Forms::Label^ n;
		private: System::Windows::Forms::Button^ dsound;
		private: System::Windows::Forms::Label^ d;
		private: System::Windows::Forms::Button^ button8;
		private: System::Windows::Forms::Label^ k;
		private: System::Windows::Forms::Button^ button9;
		private: System::Windows::Forms::Label^ l;
		private: System::Windows::Forms::Button^ button10;
		private: System::Windows::Forms::Label^ t;
		private: System::Windows::Forms::Button^ button11;
		private: System::Windows::Forms::Label^ h;
		private: System::Windows::Forms::PictureBox^ pictureBox6;
		private: System::Windows::Forms::Button^ wsound;

		private: System::Windows::Forms::Label^ w;
		private: System::Windows::Forms::PictureBox^ pictureBox7;
		private: System::Windows::Forms::Button^ ssound;
		private: System::Windows::Forms::Label^ s;
		private: System::Windows::Forms::Button^ csound;
		private: System::Windows::Forms::Label^ c;
		private: System::Windows::Forms::Button^ zsound;
		private: System::Windows::Forms::Label^ z;


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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(conso::typeid));
				this->nextbutton = (gcnew System::Windows::Forms::PictureBox());
				this->previousbutton = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->decorleft = (gcnew System::Windows::Forms::PictureBox());
				this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->lesson3 = (gcnew System::Windows::Forms::Label());
				this->fsound = (gcnew System::Windows::Forms::Button());
				this->f = (gcnew System::Windows::Forms::Label());
				this->msound = (gcnew System::Windows::Forms::Button());
				this->m = (gcnew System::Windows::Forms::Label());
				this->psound = (gcnew System::Windows::Forms::Button());
				this->p = (gcnew System::Windows::Forms::Label());
				this->bsound = (gcnew System::Windows::Forms::Button());
				this->b = (gcnew System::Windows::Forms::Label());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->rsound = (gcnew System::Windows::Forms::Button());
				this->r = (gcnew System::Windows::Forms::Label());
				this->shsound = (gcnew System::Windows::Forms::Button());
				this->sh = (gcnew System::Windows::Forms::Label());
				this->chsound = (gcnew System::Windows::Forms::Button());
				this->ch = (gcnew System::Windows::Forms::Label());
				this->zhsound = (gcnew System::Windows::Forms::Button());
				this->zh = (gcnew System::Windows::Forms::Label());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				this->ysound = (gcnew System::Windows::Forms::Button());
				this->y = (gcnew System::Windows::Forms::Label());
				this->xsound = (gcnew System::Windows::Forms::Button());
				this->x = (gcnew System::Windows::Forms::Label());
				this->qsound = (gcnew System::Windows::Forms::Button());
				this->q = (gcnew System::Windows::Forms::Label());
				this->jsound = (gcnew System::Windows::Forms::Button());
				this->j = (gcnew System::Windows::Forms::Label());
				this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
				this->button5 = (gcnew System::Windows::Forms::Button());
				this->g = (gcnew System::Windows::Forms::Label());
				this->button6 = (gcnew System::Windows::Forms::Button());
				this->n = (gcnew System::Windows::Forms::Label());
				this->dsound = (gcnew System::Windows::Forms::Button());
				this->d = (gcnew System::Windows::Forms::Label());
				this->button8 = (gcnew System::Windows::Forms::Button());
				this->k = (gcnew System::Windows::Forms::Label());
				this->button9 = (gcnew System::Windows::Forms::Button());
				this->l = (gcnew System::Windows::Forms::Label());
				this->button10 = (gcnew System::Windows::Forms::Button());
				this->t = (gcnew System::Windows::Forms::Label());
				this->button11 = (gcnew System::Windows::Forms::Button());
				this->h = (gcnew System::Windows::Forms::Label());
				this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
				this->wsound = (gcnew System::Windows::Forms::Button());
				this->w = (gcnew System::Windows::Forms::Label());
				this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
				this->ssound = (gcnew System::Windows::Forms::Button());
				this->s = (gcnew System::Windows::Forms::Label());
				this->csound = (gcnew System::Windows::Forms::Button());
				this->c = (gcnew System::Windows::Forms::Label());
				this->zsound = (gcnew System::Windows::Forms::Button());
				this->z = (gcnew System::Windows::Forms::Label());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
				this->SuspendLayout();
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
				this->previousbutton->Click += gcnew System::EventHandler(this, &conso::previousbutton_Click);
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
				this->label2->Location = System::Drawing::Point(838, 160);
				this->label2->Margin = System::Windows::Forms::Padding(16, 0, 16, 0);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(244, 82);
				this->label2->TabIndex = 56;
				this->label2->Text = L"พยัญชนะ";
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
				// fsound
				// 
				this->fsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fsound.BackgroundImage")));
				this->fsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->fsound->Location = System::Drawing::Point(516, 505);
				this->fsound->Name = L"fsound";
				this->fsound->Size = System::Drawing::Size(40, 40);
				this->fsound->TabIndex = 151;
				this->fsound->UseVisualStyleBackColor = true;
				// 
				// f
				// 
				this->f->AutoSize = true;
				this->f->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->f->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->f->Location = System::Drawing::Point(400, 497);
				this->f->Name = L"f";
				this->f->Size = System::Drawing::Size(103, 55);
				this->f->TabIndex = 150;
				this->f->Text = L"f ฟัว";
				// 
				// msound
				// 
				this->msound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"msound.BackgroundImage")));
				this->msound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->msound->Location = System::Drawing::Point(516, 428);
				this->msound->Name = L"msound";
				this->msound->Size = System::Drawing::Size(40, 40);
				this->msound->TabIndex = 149;
				this->msound->UseVisualStyleBackColor = true;
				// 
				// m
				// 
				this->m->AutoSize = true;
				this->m->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->m->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->m->Location = System::Drawing::Point(380, 418);
				this->m->Name = L"m";
				this->m->Size = System::Drawing::Size(122, 55);
				this->m->TabIndex = 148;
				this->m->Text = L"m มัว";
				// 
				// psound
				// 
				this->psound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"psound.BackgroundImage")));
				this->psound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->psound->Location = System::Drawing::Point(516, 348);
				this->psound->Name = L"psound";
				this->psound->Size = System::Drawing::Size(40, 40);
				this->psound->TabIndex = 147;
				this->psound->UseVisualStyleBackColor = true;
				// 
				// p
				// 
				this->p->AutoSize = true;
				this->p->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->p->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->p->Location = System::Drawing::Point(390, 339);
				this->p->Name = L"p";
				this->p->Size = System::Drawing::Size(113, 55);
				this->p->TabIndex = 146;
				this->p->Text = L"p พัว";
				// 
				// bsound
				// 
				this->bsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bsound.BackgroundImage")));
				this->bsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->bsound->Location = System::Drawing::Point(516, 270);
				this->bsound->Name = L"bsound";
				this->bsound->Size = System::Drawing::Size(40, 40);
				this->bsound->TabIndex = 145;
				this->bsound->UseVisualStyleBackColor = true;
				// 
				// b
				// 
				this->b->AutoSize = true;
				this->b->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->b->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->b->Location = System::Drawing::Point(390, 261);
				this->b->Name = L"b";
				this->b->Size = System::Drawing::Size(107, 55);
				this->b->TabIndex = 144;
				this->b->Text = L"b บัว";
				// 
				// pictureBox2
				// 
				this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
				this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox2->Location = System::Drawing::Point(342, 248);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(240, 318);
				this->pictureBox2->TabIndex = 143;
				this->pictureBox2->TabStop = false;
				// 
				// rsound
				// 
				this->rsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rsound.BackgroundImage")));
				this->rsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->rsound->Location = System::Drawing::Point(516, 830);
				this->rsound->Name = L"rsound";
				this->rsound->Size = System::Drawing::Size(40, 40);
				this->rsound->TabIndex = 160;
				this->rsound->UseVisualStyleBackColor = true;
				// 
				// r
				// 
				this->r->AutoSize = true;
				this->r->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->r->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->r->Location = System::Drawing::Point(401, 822);
				this->r->Name = L"r";
				this->r->Size = System::Drawing::Size(119, 55);
				this->r->TabIndex = 159;
				this->r->Text = L"r ยรือ";
				// 
				// shsound
				// 
				this->shsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"shsound.BackgroundImage")));
				this->shsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->shsound->Location = System::Drawing::Point(516, 753);
				this->shsound->Name = L"shsound";
				this->shsound->Size = System::Drawing::Size(40, 40);
				this->shsound->TabIndex = 158;
				this->shsound->UseVisualStyleBackColor = true;
				// 
				// sh
				// 
				this->sh->AutoSize = true;
				this->sh->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->sh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->sh->Location = System::Drawing::Point(366, 743);
				this->sh->Name = L"sh";
				this->sh->Size = System::Drawing::Size(157, 55);
				this->sh->TabIndex = 157;
				this->sh->Text = L"sh ซรือ";
				// 
				// chsound
				// 
				this->chsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chsound.BackgroundImage")));
				this->chsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->chsound->Location = System::Drawing::Point(516, 673);
				this->chsound->Name = L"chsound";
				this->chsound->Size = System::Drawing::Size(40, 40);
				this->chsound->TabIndex = 156;
				this->chsound->UseVisualStyleBackColor = true;
				// 
				// ch
				// 
				this->ch->AutoSize = true;
				this->ch->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->ch->Location = System::Drawing::Point(366, 664);
				this->ch->Name = L"ch";
				this->ch->Size = System::Drawing::Size(159, 55);
				this->ch->TabIndex = 155;
				this->ch->Text = L"ch ชรือ";
				// 
				// zhsound
				// 
				this->zhsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zhsound.BackgroundImage")));
				this->zhsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->zhsound->Location = System::Drawing::Point(516, 595);
				this->zhsound->Name = L"zhsound";
				this->zhsound->Size = System::Drawing::Size(40, 40);
				this->zhsound->TabIndex = 154;
				this->zhsound->UseVisualStyleBackColor = true;
				// 
				// zh
				// 
				this->zh->AutoSize = true;
				this->zh->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->zh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->zh->Location = System::Drawing::Point(372, 586);
				this->zh->Name = L"zh";
				this->zh->Size = System::Drawing::Size(150, 55);
				this->zh->TabIndex = 153;
				this->zh->Text = L"zh จรือ";
				// 
				// pictureBox3
				// 
				this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
				this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox3->Location = System::Drawing::Point(342, 573);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(240, 318);
				this->pictureBox3->TabIndex = 152;
				this->pictureBox3->TabStop = false;
				// 
				// ysound
				// 
				this->ysound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ysound.BackgroundImage")));
				this->ysound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ysound->Location = System::Drawing::Point(1501, 505);
				this->ysound->Name = L"ysound";
				this->ysound->Size = System::Drawing::Size(40, 40);
				this->ysound->TabIndex = 169;
				this->ysound->UseVisualStyleBackColor = true;
				// 
				// y
				// 
				this->y->AutoSize = true;
				this->y->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->y->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->y->Location = System::Drawing::Point(1390, 497);
				this->y->Name = L"y";
				this->y->Size = System::Drawing::Size(82, 55);
				this->y->TabIndex = 168;
				this->y->Text = L"y อี";
				// 
				// xsound
				// 
				this->xsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xsound.BackgroundImage")));
				this->xsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->xsound->Location = System::Drawing::Point(1501, 428);
				this->xsound->Name = L"xsound";
				this->xsound->Size = System::Drawing::Size(40, 40);
				this->xsound->TabIndex = 167;
				this->xsound->UseVisualStyleBackColor = true;
				// 
				// x
				// 
				this->x->AutoSize = true;
				this->x->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->x->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->x->Location = System::Drawing::Point(1385, 418);
				this->x->Name = L"x";
				this->x->Size = System::Drawing::Size(87, 55);
				this->x->TabIndex = 166;
				this->x->Text = L"x ซี";
				// 
				// qsound
				// 
				this->qsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"qsound.BackgroundImage")));
				this->qsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->qsound->Location = System::Drawing::Point(1501, 348);
				this->qsound->Name = L"qsound";
				this->qsound->Size = System::Drawing::Size(40, 40);
				this->qsound->TabIndex = 165;
				this->qsound->UseVisualStyleBackColor = true;
				// 
				// q
				// 
				this->q->AutoSize = true;
				this->q->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->q->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->q->Location = System::Drawing::Point(1380, 339);
				this->q->Name = L"q";
				this->q->Size = System::Drawing::Size(91, 55);
				this->q->TabIndex = 164;
				this->q->Text = L"q ชี";
				// 
				// jsound
				// 
				this->jsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jsound.BackgroundImage")));
				this->jsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->jsound->Location = System::Drawing::Point(1501, 270);
				this->jsound->Name = L"jsound";
				this->jsound->Size = System::Drawing::Size(40, 40);
				this->jsound->TabIndex = 163;
				this->jsound->UseVisualStyleBackColor = true;
				// 
				// j
				// 
				this->j->AutoSize = true;
				this->j->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->j->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->j->Location = System::Drawing::Point(1393, 261);
				this->j->Name = L"j";
				this->j->Size = System::Drawing::Size(72, 55);
				this->j->TabIndex = 162;
				this->j->Text = L"j จี";
				// 
				// pictureBox4
				// 
				this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
				this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox4->Location = System::Drawing::Point(1327, 248);
				this->pictureBox4->Name = L"pictureBox4";
				this->pictureBox4->Size = System::Drawing::Size(240, 318);
				this->pictureBox4->TabIndex = 161;
				this->pictureBox4->TabStop = false;
				// 
				// pictureBox5
				// 
				this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
				this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox5->Location = System::Drawing::Point(722, 248);
				this->pictureBox5->Name = L"pictureBox5";
				this->pictureBox5->Size = System::Drawing::Size(480, 318);
				this->pictureBox5->TabIndex = 170;
				this->pictureBox5->TabStop = false;
				// 
				// button5
				// 
				this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
				this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button5->Location = System::Drawing::Point(897, 428);
				this->button5->Name = L"button5";
				this->button5->Size = System::Drawing::Size(40, 40);
				this->button5->TabIndex = 176;
				this->button5->UseVisualStyleBackColor = true;
				// 
				// g
				// 
				this->g->AutoSize = true;
				this->g->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->g->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->g->Location = System::Drawing::Point(753, 418);
				this->g->Name = L"g";
				this->g->Size = System::Drawing::Size(120, 55);
				this->g->TabIndex = 175;
				this->g->Text = L"g เกอ";
				// 
				// button6
				// 
				this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
				this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button6->Location = System::Drawing::Point(897, 348);
				this->button6->Name = L"button6";
				this->button6->Size = System::Drawing::Size(40, 40);
				this->button6->TabIndex = 174;
				this->button6->UseVisualStyleBackColor = true;
				// 
				// n
				// 
				this->n->AutoSize = true;
				this->n->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->n->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->n->Location = System::Drawing::Point(753, 339);
				this->n->Name = L"n";
				this->n->Size = System::Drawing::Size(125, 55);
				this->n->TabIndex = 173;
				this->n->Text = L"n เนอ";
				// 
				// dsound
				// 
				this->dsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dsound.BackgroundImage")));
				this->dsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->dsound->Location = System::Drawing::Point(897, 270);
				this->dsound->Name = L"dsound";
				this->dsound->Size = System::Drawing::Size(40, 40);
				this->dsound->TabIndex = 172;
				this->dsound->UseVisualStyleBackColor = true;
				// 
				// d
				// 
				this->d->AutoSize = true;
				this->d->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->d->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->d->Location = System::Drawing::Point(753, 261);
				this->d->Name = L"d";
				this->d->Size = System::Drawing::Size(122, 55);
				this->d->TabIndex = 171;
				this->d->Text = L"d เตอ";
				// 
				// button8
				// 
				this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
				this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button8->Location = System::Drawing::Point(1136, 428);
				this->button8->Name = L"button8";
				this->button8->Size = System::Drawing::Size(40, 40);
				this->button8->TabIndex = 182;
				this->button8->UseVisualStyleBackColor = true;
				// 
				// k
				// 
				this->k->AutoSize = true;
				this->k->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->k->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->k->Location = System::Drawing::Point(982, 418);
				this->k->Name = L"k";
				this->k->Size = System::Drawing::Size(121, 55);
				this->k->TabIndex = 181;
				this->k->Text = L"k เคอ";
				// 
				// button9
				// 
				this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
				this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button9->Location = System::Drawing::Point(1136, 348);
				this->button9->Name = L"button9";
				this->button9->Size = System::Drawing::Size(40, 40);
				this->button9->TabIndex = 180;
				this->button9->UseVisualStyleBackColor = true;
				// 
				// l
				// 
				this->l->AutoSize = true;
				this->l->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->l->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->l->Location = System::Drawing::Point(992, 339);
				this->l->Name = L"l";
				this->l->Size = System::Drawing::Size(107, 55);
				this->l->TabIndex = 179;
				this->l->Text = L"l เลอ";
				// 
				// button10
				// 
				this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
				this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button10->Location = System::Drawing::Point(1136, 270);
				this->button10->Name = L"button10";
				this->button10->Size = System::Drawing::Size(40, 40);
				this->button10->TabIndex = 178;
				this->button10->UseVisualStyleBackColor = true;
				// 
				// t
				// 
				this->t->AutoSize = true;
				this->t->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->t->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->t->Location = System::Drawing::Point(986, 261);
				this->t->Name = L"t";
				this->t->Size = System::Drawing::Size(114, 55);
				this->t->TabIndex = 177;
				this->t->Text = L"t เทอ";
				// 
				// button11
				// 
				this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
				this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->button11->Location = System::Drawing::Point(1007, 503);
				this->button11->Name = L"button11";
				this->button11->Size = System::Drawing::Size(40, 40);
				this->button11->TabIndex = 184;
				this->button11->UseVisualStyleBackColor = true;
				// 
				// h
				// 
				this->h->AutoSize = true;
				this->h->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->h->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->h->Location = System::Drawing::Point(880, 497);
				this->h->Name = L"h";
				this->h->Size = System::Drawing::Size(121, 55);
				this->h->TabIndex = 183;
				this->h->Text = L"h เฮอ";
				// 
				// pictureBox6
				// 
				this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
				this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox6->Location = System::Drawing::Point(996, 607);
				this->pictureBox6->Name = L"pictureBox6";
				this->pictureBox6->Size = System::Drawing::Size(240, 80);
				this->pictureBox6->TabIndex = 185;
				this->pictureBox6->TabStop = false;
				// 
				// wsound
				// 
				this->wsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wsound.BackgroundImage")));
				this->wsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->wsound->Location = System::Drawing::Point(1158, 625);
				this->wsound->Name = L"wsound";
				this->wsound->Size = System::Drawing::Size(40, 40);
				this->wsound->TabIndex = 187;
				this->wsound->UseVisualStyleBackColor = true;
				// 
				// w
				// 
				this->w->AutoSize = true;
				this->w->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->w->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->w->Location = System::Drawing::Point(1035, 619);
				this->w->Name = L"w";
				this->w->Size = System::Drawing::Size(95, 55);
				this->w->TabIndex = 186;
				this->w->Text = L"w อู";
				// 
				// pictureBox7
				// 
				this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
				this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox7->Location = System::Drawing::Point(697, 607);
				this->pictureBox7->Name = L"pictureBox7";
				this->pictureBox7->Size = System::Drawing::Size(240, 237);
				this->pictureBox7->TabIndex = 188;
				this->pictureBox7->TabStop = false;
				// 
				// ssound
				// 
				this->ssound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ssound.BackgroundImage")));
				this->ssound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ssound->Location = System::Drawing::Point(870, 786);
				this->ssound->Name = L"ssound";
				this->ssound->Size = System::Drawing::Size(40, 40);
				this->ssound->TabIndex = 194;
				this->ssound->UseVisualStyleBackColor = true;
				// 
				// s
				// 
				this->s->AutoSize = true;
				this->s->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->s->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->s->Location = System::Drawing::Point(735, 776);
				this->s->Name = L"s";
				this->s->Size = System::Drawing::Size(110, 55);
				this->s->TabIndex = 193;
				this->s->Text = L"s ซือ";
				// 
				// csound
				// 
				this->csound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"csound.BackgroundImage")));
				this->csound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->csound->Location = System::Drawing::Point(870, 706);
				this->csound->Name = L"csound";
				this->csound->Size = System::Drawing::Size(40, 40);
				this->csound->TabIndex = 192;
				this->csound->UseVisualStyleBackColor = true;
				// 
				// c
				// 
				this->c->AutoSize = true;
				this->c->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->c->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->c->Location = System::Drawing::Point(735, 697);
				this->c->Name = L"c";
				this->c->Size = System::Drawing::Size(112, 55);
				this->c->TabIndex = 191;
				this->c->Text = L"c ชือ";
				// 
				// zsound
				// 
				this->zsound->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zsound.BackgroundImage")));
				this->zsound->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->zsound->Location = System::Drawing::Point(870, 628);
				this->zsound->Name = L"zsound";
				this->zsound->Size = System::Drawing::Size(40, 40);
				this->zsound->TabIndex = 190;
				this->zsound->UseVisualStyleBackColor = true;
				// 
				// z
				// 
				this->z->AutoSize = true;
				this->z->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->z->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->z->Location = System::Drawing::Point(735, 619);
				this->z->Name = L"z";
				this->z->Size = System::Drawing::Size(103, 55);
				this->z->TabIndex = 189;
				this->z->Text = L"z จือ";
				// 
				// conso
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1904, 1041);
				this->Controls->Add(this->ssound);
				this->Controls->Add(this->s);
				this->Controls->Add(this->csound);
				this->Controls->Add(this->c);
				this->Controls->Add(this->zsound);
				this->Controls->Add(this->z);
				this->Controls->Add(this->pictureBox7);
				this->Controls->Add(this->wsound);
				this->Controls->Add(this->w);
				this->Controls->Add(this->pictureBox6);
				this->Controls->Add(this->button11);
				this->Controls->Add(this->h);
				this->Controls->Add(this->button8);
				this->Controls->Add(this->k);
				this->Controls->Add(this->button9);
				this->Controls->Add(this->l);
				this->Controls->Add(this->button10);
				this->Controls->Add(this->t);
				this->Controls->Add(this->button5);
				this->Controls->Add(this->g);
				this->Controls->Add(this->button6);
				this->Controls->Add(this->n);
				this->Controls->Add(this->dsound);
				this->Controls->Add(this->d);
				this->Controls->Add(this->pictureBox5);
				this->Controls->Add(this->ysound);
				this->Controls->Add(this->y);
				this->Controls->Add(this->xsound);
				this->Controls->Add(this->x);
				this->Controls->Add(this->qsound);
				this->Controls->Add(this->q);
				this->Controls->Add(this->jsound);
				this->Controls->Add(this->j);
				this->Controls->Add(this->pictureBox4);
				this->Controls->Add(this->rsound);
				this->Controls->Add(this->r);
				this->Controls->Add(this->shsound);
				this->Controls->Add(this->sh);
				this->Controls->Add(this->chsound);
				this->Controls->Add(this->ch);
				this->Controls->Add(this->zhsound);
				this->Controls->Add(this->zh);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->fsound);
				this->Controls->Add(this->f);
				this->Controls->Add(this->msound);
				this->Controls->Add(this->m);
				this->Controls->Add(this->psound);
				this->Controls->Add(this->p);
				this->Controls->Add(this->bsound);
				this->Controls->Add(this->b);
				this->Controls->Add(this->pictureBox2);
				this->Controls->Add(this->nextbutton);
				this->Controls->Add(this->previousbutton);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->decorleft);
				this->Controls->Add(this->progressBar1);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->lesson3);
				this->MaximumSize = System::Drawing::Size(1920, 1080);
				this->MinimumSize = System::Drawing::Size(1918, 1030);
				this->Name = L"conso";
				this->Text = L"conso";
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nextbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->previousbutton))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->decorleft))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		public:bool switchToformhome = false;
		private: System::Void previousbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			switchToformhome = true;
		}
};
	}
