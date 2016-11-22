#pragma once

namespace projGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnExecutar;
	protected: 

	private: System::Windows::Forms::CheckBox^  chkNome;
	private: System::Windows::Forms::CheckBox^  chkIdade;
	protected: 


	private: System::Windows::Forms::TextBox^  txbUsuario;


	private: System::Windows::Forms::Label^  lblMensagem;
	private: System::Windows::Forms::ComboBox^  cmbComidas;


	private: System::Windows::Forms::GroupBox^  grpCores;
	private: System::Windows::Forms::RadioButton^  rdbAzul;


	private: System::Windows::Forms::RadioButton^  rdbVermelho;
	private: System::Windows::Forms::RadioButton^  rdbVerde;





	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnExecutar = (gcnew System::Windows::Forms::Button());
			this->chkNome = (gcnew System::Windows::Forms::CheckBox());
			this->chkIdade = (gcnew System::Windows::Forms::CheckBox());
			this->txbUsuario = (gcnew System::Windows::Forms::TextBox());
			this->lblMensagem = (gcnew System::Windows::Forms::Label());
			this->cmbComidas = (gcnew System::Windows::Forms::ComboBox());
			this->grpCores = (gcnew System::Windows::Forms::GroupBox());
			this->rdbAzul = (gcnew System::Windows::Forms::RadioButton());
			this->rdbVermelho = (gcnew System::Windows::Forms::RadioButton());
			this->rdbVerde = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->grpCores->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnExecutar
			// 
			this->btnExecutar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnExecutar->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnExecutar->Location = System::Drawing::Point(24, 399);
			this->btnExecutar->Name = L"btnExecutar";
			this->btnExecutar->Size = System::Drawing::Size(111, 45);
			this->btnExecutar->TabIndex = 0;
			this->btnExecutar->Text = L"Executar";
			this->btnExecutar->UseVisualStyleBackColor = true;
			this->btnExecutar->Click += gcnew System::EventHandler(this, &Form1::btnExecutar_Click);
			// 
			// chkNome
			// 
			this->chkNome->AutoSize = true;
			this->chkNome->Location = System::Drawing::Point(23, 142);
			this->chkNome->Name = L"chkNome";
			this->chkNome->Size = System::Drawing::Size(54, 17);
			this->chkNome->TabIndex = 1;
			this->chkNome->Text = L"Nome";
			this->chkNome->UseVisualStyleBackColor = true;
			// 
			// chkIdade
			// 
			this->chkIdade->AutoSize = true;
			this->chkIdade->Location = System::Drawing::Point(23, 165);
			this->chkIdade->Name = L"chkIdade";
			this->chkIdade->Size = System::Drawing::Size(53, 17);
			this->chkIdade->TabIndex = 2;
			this->chkIdade->Text = L"Idade";
			this->chkIdade->UseVisualStyleBackColor = true;
			this->chkIdade->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// txbUsuario
			// 
			this->txbUsuario->Location = System::Drawing::Point(23, 106);
			this->txbUsuario->Name = L"txbUsuario";
			this->txbUsuario->Size = System::Drawing::Size(261, 20);
			this->txbUsuario->TabIndex = 3;
			this->txbUsuario->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// lblMensagem
			// 
			this->lblMensagem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMensagem->Location = System::Drawing::Point(21, 21);
			this->lblMensagem->Name = L"lblMensagem";
			this->lblMensagem->Size = System::Drawing::Size(531, 67);
			this->lblMensagem->TabIndex = 4;
			this->lblMensagem->Text = L"Aguardando...";
			this->lblMensagem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblMensagem->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// cmbComidas
			// 
			this->cmbComidas->FormattingEnabled = true;
			this->cmbComidas->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Ração", L"BANANA!", L"Folhinhas", L"Regiminho", 
				L"Tomatinho", L"Sorvete"});
			this->cmbComidas->Location = System::Drawing::Point(24, 217);
			this->cmbComidas->Name = L"cmbComidas";
			this->cmbComidas->Size = System::Drawing::Size(127, 21);
			this->cmbComidas->TabIndex = 5;
			this->cmbComidas->Text = L"Selecione uma opção";
			this->cmbComidas->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// grpCores
			// 
			this->grpCores->Controls->Add(this->rdbAzul);
			this->grpCores->Controls->Add(this->rdbVermelho);
			this->grpCores->Controls->Add(this->rdbVerde);
			this->grpCores->Location = System::Drawing::Point(168, 217);
			this->grpCores->Name = L"grpCores";
			this->grpCores->Size = System::Drawing::Size(121, 152);
			this->grpCores->TabIndex = 6;
			this->grpCores->TabStop = false;
			this->grpCores->Text = L"Cores";
			this->grpCores->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// rdbAzul
			// 
			this->rdbAzul->AutoSize = true;
			this->rdbAzul->Location = System::Drawing::Point(6, 98);
			this->rdbAzul->Name = L"rdbAzul";
			this->rdbAzul->Size = System::Drawing::Size(45, 17);
			this->rdbAzul->TabIndex = 2;
			this->rdbAzul->TabStop = true;
			this->rdbAzul->Text = L"Azul";
			this->rdbAzul->UseVisualStyleBackColor = true;
			this->rdbAzul->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// rdbVermelho
			// 
			this->rdbVermelho->AutoSize = true;
			this->rdbVermelho->Location = System::Drawing::Point(6, 32);
			this->rdbVermelho->Name = L"rdbVermelho";
			this->rdbVermelho->Size = System::Drawing::Size(69, 17);
			this->rdbVermelho->TabIndex = 1;
			this->rdbVermelho->TabStop = true;
			this->rdbVermelho->Text = L"Vermelho";
			this->rdbVermelho->UseVisualStyleBackColor = true;
			this->rdbVermelho->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// rdbVerde
			// 
			this->rdbVerde->AutoSize = true;
			this->rdbVerde->Location = System::Drawing::Point(6, 65);
			this->rdbVerde->Name = L"rdbVerde";
			this->rdbVerde->Size = System::Drawing::Size(53, 17);
			this->rdbVerde->TabIndex = 0;
			this->rdbVerde->TabStop = true;
			this->rdbVerde->Text = L"Verde";
			this->rdbVerde->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(321, 106);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(216, 314);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 469);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->grpCores);
			this->Controls->Add(this->cmbComidas);
			this->Controls->Add(this->lblMensagem);
			this->Controls->Add(this->txbUsuario);
			this->Controls->Add(this->chkIdade);
			this->Controls->Add(this->chkNome);
			this->Controls->Add(this->btnExecutar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Meu Minion";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grpCores->ResumeLayout(false);
			this->grpCores->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 cmbComidas->SelectedIndex=0;//já vai aparecer uma seleção válida(a primeira opção p/ comida)
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnExecutar_Click(System::Object^  sender, System::EventArgs^  e) {
			 lblMensagem->Text="Meu minion, ";//troca a mensagem do Label(Aguardado...) para Clicou
			 if(chkNome->Checked)
				 lblMensagem->Text=lblMensagem->Text + "Bob, ";
			 if(chkIdade->Checked)
				 lblMensagem->Text =lblMensagem->Text + "2 anos, ";
			 /*switch(cmbComidas->SelectedIndex)
			 {
			 case 0:....break;
			 case 1:....break;
			 ....
			 }*/
			 lblMensagem->Text =lblMensagem->Text + " que gosta de " + cmbComidas->SelectedItem->ToString() +", ";
			 lblMensagem->Text =lblMensagem->Text+ txbUsuario->Text+".";
			if(rdbVermelho->Checked)
				 lblMensagem->ForeColor=System::Drawing::Color::DarkRed;
			if(rdbVerde->Checked)
				lblMensagem->ForeColor=System::Drawing::Color::ForestGreen;
			if(rdbAzul->Checked)
				lblMensagem->ForeColor=System::Drawing::Color::MidnightBlue;

		 }
};
}

