#pragma once

#include <vector>
#include <cmath>

namespace Dirichlettask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: �������� ��� ������������
            //
        }

    protected:
        /// <summary>
        /// ���������� ��� ������������ �������.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:





    private: System::Windows::Forms::GroupBox^  groupBox1;
    private: System::Windows::Forms::GroupBox^  groupBox2;
    private: System::Windows::Forms::TextBox^  textBox2;
    private: System::Windows::Forms::TextBox^  textBox1;
    private: System::Windows::Forms::TextBox^  textBox4;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::TextBox^  textBox3;
    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label5;

    private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::Label^  label8;
    private: System::Windows::Forms::Label^  label7;
    private: System::Windows::Forms::Label^  label6;
    private: System::Windows::Forms::Button^  buttonCalculateTest;







    private: System::Windows::Forms::Label^  label13;
    private: System::Windows::Forms::Label^  label12;
    private: System::Windows::Forms::Label^  label11;
    private: System::Windows::Forms::Label^  label10;
    private: System::Windows::Forms::TabControl^  tabControl1;
    private: System::Windows::Forms::TabPage^  tabPage1;
    private: System::Windows::Forms::PictureBox^  pictureBox2;
    private: System::Windows::Forms::Label^  label14;
    private: System::Windows::Forms::TabPage^  tabPage2;
    private: System::Windows::Forms::PictureBox^  pictureBox1;
    private: System::Windows::Forms::Button^  buttonCalculateMain;











    private: System::Windows::Forms::GroupBox^  groupBox3;
    private: System::Windows::Forms::TextBox^  textBox5;
    private: System::Windows::Forms::Label^  label16;
    private: System::Windows::Forms::TextBox^  textBox6;
    private: System::Windows::Forms::Label^  label17;
    private: System::Windows::Forms::Label^  label18;
    private: System::Windows::Forms::Label^  label19;
    private: System::Windows::Forms::TextBox^  textBox7;
    private: System::Windows::Forms::TextBox^  textBox8;
    private: System::Windows::Forms::Label^  label15;

    private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
    private: System::Windows::Forms::TextBox^  textBox9;
    private: System::Windows::Forms::Label^  label28;
    private: System::Windows::Forms::GroupBox^  groupBox5;
    private: System::Windows::Forms::RadioButton^  radioButtonV2V;



    private: System::Windows::Forms::RadioButton^  radioButtonV;
    private: System::Windows::Forms::DataGridView^  dataGridView1;
    private: System::Windows::Forms::DataGridView^  dataGridView2;
    private: System::Windows::Forms::TextBox^  textBox10;
    private: System::Windows::Forms::Label^  label29;
    private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
    private: System::Windows::Forms::GroupBox^  groupBox4;
    private: System::Windows::Forms::Label^  label20;
    private: System::Windows::Forms::Label^  label21;
    private: System::Windows::Forms::Label^  label22;
    private: System::Windows::Forms::Label^  label23;
    private: System::Windows::Forms::Label^  label24;
    private: System::Windows::Forms::Label^  label25;
    private: System::Windows::Forms::Label^  label26;
    private: System::Windows::Forms::Label^  label27;
    private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::RadioButton^  radioButtonV2V_main;
private: System::Windows::Forms::RadioButton^  radioButtonV2_main;
private: System::Windows::Forms::RadioButton^  radioButtonV_main;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::RadioButton^  radioButtonYTest;
private: System::Windows::Forms::RadioButton^  radioButtonXTest;
private: System::Windows::Forms::RadioButton^  radioButtonNullTest;

private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::RadioButton^  radioButtonYMain;

private: System::Windows::Forms::RadioButton^  radioButtonXMain;

private: System::Windows::Forms::RadioButton^  radioButtonNullMain;
private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::RadioButton^  radioButtonDrawUV;
private: System::Windows::Forms::RadioButton^  radioButtonDrawV;
private: System::Windows::Forms::RadioButton^  radioButtonDrawV0;
private: System::Windows::Forms::RadioButton^  radioButtonDrawU;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::RadioButton^  radioButtonDrawVV2;
private: System::Windows::Forms::RadioButton^  radioButtonDrawV2;
private: System::Windows::Forms::RadioButton^  radioButtonDrawVMain;
private: System::Windows::Forms::RadioButton^  radioButtonDrawV20;
private: System::Windows::Forms::RadioButton^  radioButtonDrawV0Main;
private: System::Windows::Forms::RadioButton^  radioButtonU;

private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::Label^  label32;

private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;













    protected:

    private:
        /// <summary>
        /// ������������ ���������� ������������.
        /// </summary>
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// ��������� ����� ��� ��������� ������������ � �� ��������� 
        /// ���������� ����� ������ � ������� ��������� ����.
        /// </summary>
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->buttonCalculateTest = (gcnew System::Windows::Forms::Button());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonDrawUV = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonDrawV = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonDrawV0 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonDrawU = (gcnew System::Windows::Forms::RadioButton());
            this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonYTest = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonXTest = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonNullTest = (gcnew System::Windows::Forms::RadioButton());
            this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonU = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonV2V = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonV = (gcnew System::Windows::Forms::RadioButton());
            this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonDrawVV2 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonDrawV2 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonDrawVMain = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonDrawV20 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonDrawV0Main = (gcnew System::Windows::Forms::RadioButton());
            this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonYMain = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonXMain = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonNullMain = (gcnew System::Windows::Forms::RadioButton());
            this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->buttonCalculateMain = (gcnew System::Windows::Forms::Button());
            this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonV2V_main = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonV2_main = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonV_main = (gcnew System::Windows::Forms::RadioButton());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->groupBox9->SuspendLayout();
            this->groupBox7->SuspendLayout();
            this->groupBox5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->tabPage2->SuspendLayout();
            this->groupBox10->SuspendLayout();
            this->groupBox8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
            this->groupBox4->SuspendLayout();
            this->groupBox12->SuspendLayout();
            this->groupBox11->SuspendLayout();
            this->groupBox6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->groupBox3->SuspendLayout();
            this->SuspendLayout();
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->label31);
            this->groupBox1->Controls->Add(this->label13);
            this->groupBox1->Controls->Add(this->label12);
            this->groupBox1->Controls->Add(this->label11);
            this->groupBox1->Controls->Add(this->label10);
            this->groupBox1->Controls->Add(this->label9);
            this->groupBox1->Controls->Add(this->label8);
            this->groupBox1->Controls->Add(this->label7);
            this->groupBox1->Controls->Add(this->label6);
            this->groupBox1->Location = System::Drawing::Point(6, 654);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(726, 247);
            this->groupBox1->TabIndex = 5;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"�������";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Location = System::Drawing::Point(6, 77);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(212, 17);
            this->label31->TabIndex = 9;
            this->label31->Text = L"����������� �������� ������:";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(284, 50);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(90, 17);
            this->label13->TabIndex = 7;
            this->label13->Text = L"� ���� (x, y):";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(284, 22);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(300, 17);
            this->label12->TabIndex = 6;
            this->label12->Text = L"����. �������� ����. � ����. ������� |U-V|:";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(7, 184);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(281, 17);
            this->label11->TabIndex = 5;
            this->label11->Text = L"����� �� ����� ������ � �������� Rs_2:";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(8, 157);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(291, 17);
            this->label10->TabIndex = 4;
            this->label10->Text = L"������� ���� �� ���. ����������� R0_2:";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(8, 129);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(248, 17);
            this->label9->TabIndex = 3;
            this->label9->Text = L"����������� ����������� �������:";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(8, 102);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(124, 17);
            this->label8->TabIndex = 2;
            this->label8->Text = L"���-�� ��������:";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(6, 50);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(130, 17);
            this->label7->TabIndex = 1;
            this->label7->Text = L"�������� ������:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(7, 22);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(54, 17);
            this->label6->TabIndex = 0;
            this->label6->Text = L"�����:";
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->label28);
            this->groupBox2->Controls->Add(this->textBox4);
            this->groupBox2->Controls->Add(this->textBox9);
            this->groupBox2->Controls->Add(this->label4);
            this->groupBox2->Controls->Add(this->textBox3);
            this->groupBox2->Controls->Add(this->label3);
            this->groupBox2->Controls->Add(this->label2);
            this->groupBox2->Controls->Add(this->label1);
            this->groupBox2->Controls->Add(this->textBox2);
            this->groupBox2->Controls->Add(this->textBox1);
            this->groupBox2->Location = System::Drawing::Point(6, 293);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(726, 114);
            this->groupBox2->TabIndex = 6;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"��������� ������";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Location = System::Drawing::Point(7, 75);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(305, 17);
            this->label28->TabIndex = 23;
            this->label28->Text = L"�������� ������  w (� ��������� �� 0 �� 2):";
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(461, 45);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(84, 22);
            this->textBox4->TabIndex = 7;
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(461, 70);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(84, 22);
            this->textBox9->TabIndex = 22;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(284, 52);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(163, 17);
            this->label4->TabIndex = 6;
            this->label4->Text = L"����. ���-�� ��������:";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(461, 20);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(84, 22);
            this->textBox3->TabIndex = 5;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(284, 26);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(126, 17);
            this->label3->TabIndex = 4;
            this->label3->Text = L"�������� ������:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(6, 50);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(159, 17);
            this->label2->TabIndex = 3;
            this->label2->Text = L"����� ��������� �� y:";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(7, 25);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(158, 17);
            this->label1->TabIndex = 2;
            this->label1->Text = L"����� ��������� �� x:";
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(171, 47);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(84, 22);
            this->textBox2->TabIndex = 1;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(172, 21);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(84, 22);
            this->textBox1->TabIndex = 0;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->label5->Location = System::Drawing::Point(4, 154);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(0, 18);
            this->label5->TabIndex = 7;
            // 
            // buttonCalculateTest
            // 
            this->buttonCalculateTest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->buttonCalculateTest->Location = System::Drawing::Point(6, 600);
            this->buttonCalculateTest->Name = L"buttonCalculateTest";
            this->buttonCalculateTest->Size = System::Drawing::Size(340, 48);
            this->buttonCalculateTest->TabIndex = 10;
            this->buttonCalculateTest->Text = L"���������";
            this->buttonCalculateTest->UseVisualStyleBackColor = true;
            this->buttonCalculateTest->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculateTest_Click);
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Location = System::Drawing::Point(7, 3);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1512, 924);
            this->tabControl1->TabIndex = 13;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->groupBox9);
            this->tabPage1->Controls->Add(this->groupBox7);
            this->tabPage1->Controls->Add(this->groupBox5);
            this->tabPage1->Controls->Add(this->chart1);
            this->tabPage1->Controls->Add(this->dataGridView1);
            this->tabPage1->Controls->Add(this->groupBox1);
            this->tabPage1->Controls->Add(this->pictureBox2);
            this->tabPage1->Controls->Add(this->label14);
            this->tabPage1->Controls->Add(this->groupBox2);
            this->tabPage1->Controls->Add(this->buttonCalculateTest);
            this->tabPage1->Location = System::Drawing::Point(4, 25);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(1504, 895);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"�������� ������";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // groupBox9
            // 
            this->groupBox9->Controls->Add(this->radioButtonDrawUV);
            this->groupBox9->Controls->Add(this->radioButtonDrawV);
            this->groupBox9->Controls->Add(this->radioButtonDrawV0);
            this->groupBox9->Controls->Add(this->radioButtonDrawU);
            this->groupBox9->Location = System::Drawing::Point(353, 519);
            this->groupBox9->Name = L"groupBox9";
            this->groupBox9->Size = System::Drawing::Size(379, 75);
            this->groupBox9->TabIndex = 25;
            this->groupBox9->TabStop = false;
            this->groupBox9->Text = L"��������� ������";
            // 
            // radioButtonDrawUV
            // 
            this->radioButtonDrawUV->AutoSize = true;
            this->radioButtonDrawUV->Location = System::Drawing::Point(167, 48);
            this->radioButtonDrawUV->Name = L"radioButtonDrawUV";
            this->radioButtonDrawUV->Size = System::Drawing::Size(107, 21);
            this->radioButtonDrawUV->TabIndex = 3;
            this->radioButtonDrawUV->TabStop = true;
            this->radioButtonDrawUV->Text = L"U(x,y)-V(x,y)";
            this->radioButtonDrawUV->UseVisualStyleBackColor = true;
            // 
            // radioButtonDrawV
            // 
            this->radioButtonDrawV->AutoSize = true;
            this->radioButtonDrawV->Location = System::Drawing::Point(167, 21);
            this->radioButtonDrawV->Name = L"radioButtonDrawV";
            this->radioButtonDrawV->Size = System::Drawing::Size(65, 21);
            this->radioButtonDrawV->TabIndex = 2;
            this->radioButtonDrawV->TabStop = true;
            this->radioButtonDrawV->Text = L"V(x,y)";
            this->radioButtonDrawV->UseVisualStyleBackColor = true;
            // 
            // radioButtonDrawV0
            // 
            this->radioButtonDrawV0->AutoSize = true;
            this->radioButtonDrawV0->Location = System::Drawing::Point(6, 48);
            this->radioButtonDrawV0->Name = L"radioButtonDrawV0";
            this->radioButtonDrawV0->Size = System::Drawing::Size(73, 21);
            this->radioButtonDrawV0->TabIndex = 1;
            this->radioButtonDrawV0->TabStop = true;
            this->radioButtonDrawV0->Text = L"V0(x,y)";
            this->radioButtonDrawV0->UseVisualStyleBackColor = true;
            // 
            // radioButtonDrawU
            // 
            this->radioButtonDrawU->AutoSize = true;
            this->radioButtonDrawU->Location = System::Drawing::Point(6, 21);
            this->radioButtonDrawU->Name = L"radioButtonDrawU";
            this->radioButtonDrawU->Size = System::Drawing::Size(66, 21);
            this->radioButtonDrawU->TabIndex = 0;
            this->radioButtonDrawU->TabStop = true;
            this->radioButtonDrawU->Text = L"U(x,y)";
            this->radioButtonDrawU->UseVisualStyleBackColor = true;
            // 
            // groupBox7
            // 
            this->groupBox7->Controls->Add(this->radioButtonYTest);
            this->groupBox7->Controls->Add(this->radioButtonXTest);
            this->groupBox7->Controls->Add(this->radioButtonNullTest);
            this->groupBox7->Location = System::Drawing::Point(6, 413);
            this->groupBox7->Name = L"groupBox7";
            this->groupBox7->Size = System::Drawing::Size(726, 100);
            this->groupBox7->TabIndex = 24;
            this->groupBox7->TabStop = false;
            this->groupBox7->Text = L"��������� �����������";
            // 
            // radioButtonYTest
            // 
            this->radioButtonYTest->AutoSize = true;
            this->radioButtonYTest->Location = System::Drawing::Point(9, 73);
            this->radioButtonYTest->Name = L"radioButtonYTest";
            this->radioButtonYTest->Size = System::Drawing::Size(179, 21);
            this->radioButtonYTest->TabIndex = 2;
            this->radioButtonYTest->TabStop = true;
            this->radioButtonYTest->Text = L"������������ ����� y";
            this->radioButtonYTest->UseVisualStyleBackColor = true;
            // 
            // radioButtonXTest
            // 
            this->radioButtonXTest->AutoSize = true;
            this->radioButtonXTest->Location = System::Drawing::Point(9, 46);
            this->radioButtonXTest->Name = L"radioButtonXTest";
            this->radioButtonXTest->Size = System::Drawing::Size(178, 21);
            this->radioButtonXTest->TabIndex = 1;
            this->radioButtonXTest->TabStop = true;
            this->radioButtonXTest->Text = L"������������ ����� x";
            this->radioButtonXTest->UseVisualStyleBackColor = true;
            // 
            // radioButtonNullTest
            // 
            this->radioButtonNullTest->AutoSize = true;
            this->radioButtonNullTest->Location = System::Drawing::Point(10, 22);
            this->radioButtonNullTest->Name = L"radioButtonNullTest";
            this->radioButtonNullTest->Size = System::Drawing::Size(85, 21);
            this->radioButtonNullTest->TabIndex = 0;
            this->radioButtonNullTest->TabStop = true;
            this->radioButtonNullTest->Text = L"�������";
            this->radioButtonNullTest->UseVisualStyleBackColor = true;
            // 
            // groupBox5
            // 
            this->groupBox5->Controls->Add(this->radioButtonU);
            this->groupBox5->Controls->Add(this->radioButtonV2V);
            this->groupBox5->Controls->Add(this->radioButtonV);
            this->groupBox5->Location = System::Drawing::Point(6, 519);
            this->groupBox5->Name = L"groupBox5";
            this->groupBox5->Size = System::Drawing::Size(340, 75);
            this->groupBox5->TabIndex = 23;
            this->groupBox5->TabStop = false;
            this->groupBox5->Text = L"�������� � �������";
            // 
            // radioButtonU
            // 
            this->radioButtonU->AutoSize = true;
            this->radioButtonU->Location = System::Drawing::Point(9, 21);
            this->radioButtonU->Name = L"radioButtonU";
            this->radioButtonU->Size = System::Drawing::Size(70, 21);
            this->radioButtonU->TabIndex = 3;
            this->radioButtonU->TabStop = true;
            this->radioButtonU->Text = L"U(x, y)";
            this->radioButtonU->UseVisualStyleBackColor = true;
            // 
            // radioButtonV2V
            // 
            this->radioButtonV2V->AutoSize = true;
            this->radioButtonV2V->Location = System::Drawing::Point(150, 21);
            this->radioButtonV2V->Name = L"radioButtonV2V";
            this->radioButtonV2V->Size = System::Drawing::Size(137, 21);
            this->radioButtonV2V->TabIndex = 2;
            this->radioButtonV2V->TabStop = true;
            this->radioButtonV2V->Text = L"| U(x, y) - V(x, y) |";
            this->radioButtonV2V->UseVisualStyleBackColor = true;
            // 
            // radioButtonV
            // 
            this->radioButtonV->AutoSize = true;
            this->radioButtonV->Location = System::Drawing::Point(10, 48);
            this->radioButtonV->Name = L"radioButtonV";
            this->radioButtonV->Size = System::Drawing::Size(69, 21);
            this->radioButtonV->TabIndex = 0;
            this->radioButtonV->TabStop = true;
            this->radioButtonV->Text = L"V(x, y)";
            this->radioButtonV->UseVisualStyleBackColor = true;
            // 
            // chart1
            // 
            chartArea1->Area3DStyle->Enable3D = true;
            chartArea1->Area3DStyle->IsRightAngleAxes = false;
            chartArea1->Name = L"ChartArea1";
            this->chart1->ChartAreas->Add(chartArea1);
            this->chart1->Location = System::Drawing::Point(738, 6);
            this->chart1->Name = L"chart1";
            this->chart1->Size = System::Drawing::Size(751, 450);
            this->chart1->TabIndex = 21;
            this->chart1->Text = L"chart1";
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(738, 459);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(760, 428);
            this->dataGridView1->TabIndex = 20;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(6, 29);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(726, 258);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 19;
            this->pictureBox2->TabStop = false;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->label14->Location = System::Drawing::Point(75, 3);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(172, 25);
            this->label14->TabIndex = 12;
            this->label14->Text = L"�������� ������";
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->groupBox10);
            this->tabPage2->Controls->Add(this->groupBox8);
            this->tabPage2->Controls->Add(this->chart2);
            this->tabPage2->Controls->Add(this->groupBox4);
            this->tabPage2->Controls->Add(this->buttonCalculateMain);
            this->tabPage2->Controls->Add(this->groupBox6);
            this->tabPage2->Controls->Add(this->dataGridView2);
            this->tabPage2->Controls->Add(this->pictureBox1);
            this->tabPage2->Controls->Add(this->groupBox3);
            this->tabPage2->Controls->Add(this->label15);
            this->tabPage2->Location = System::Drawing::Point(4, 25);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(1504, 895);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"�������� ������";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // groupBox10
            // 
            this->groupBox10->Controls->Add(this->radioButtonDrawVV2);
            this->groupBox10->Controls->Add(this->radioButtonDrawV2);
            this->groupBox10->Controls->Add(this->radioButtonDrawVMain);
            this->groupBox10->Controls->Add(this->radioButtonDrawV20);
            this->groupBox10->Controls->Add(this->radioButtonDrawV0Main);
            this->groupBox10->Location = System::Drawing::Point(328, 433);
            this->groupBox10->Name = L"groupBox10";
            this->groupBox10->Size = System::Drawing::Size(435, 75);
            this->groupBox10->TabIndex = 28;
            this->groupBox10->TabStop = false;
            this->groupBox10->Text = L"��������� ������";
            // 
            // radioButtonDrawVV2
            // 
            this->radioButtonDrawVV2->AutoSize = true;
            this->radioButtonDrawVV2->Location = System::Drawing::Point(256, 21);
            this->radioButtonDrawVV2->Name = L"radioButtonDrawVV2";
            this->radioButtonDrawVV2->Size = System::Drawing::Size(114, 21);
            this->radioButtonDrawVV2->TabIndex = 4;
            this->radioButtonDrawVV2->TabStop = true;
            this->radioButtonDrawVV2->Text = L"V(x,y)-V2(x,y)";
            this->radioButtonDrawVV2->UseVisualStyleBackColor = true;
            // 
            // radioButtonDrawV2
            // 
            this->radioButtonDrawV2->AutoSize = true;
            this->radioButtonDrawV2->Location = System::Drawing::Point(143, 48);
            this->radioButtonDrawV2->Name = L"radioButtonDrawV2";
            this->radioButtonDrawV2->Size = System::Drawing::Size(73, 21);
            this->radioButtonDrawV2->TabIndex = 3;
            this->radioButtonDrawV2->TabStop = true;
            this->radioButtonDrawV2->Text = L"V2(x,y)";
            this->radioButtonDrawV2->UseVisualStyleBackColor = true;
            // 
            // radioButtonDrawVMain
            // 
            this->radioButtonDrawVMain->AutoSize = true;
            this->radioButtonDrawVMain->Location = System::Drawing::Point(143, 22);
            this->radioButtonDrawVMain->Name = L"radioButtonDrawVMain";
            this->radioButtonDrawVMain->Size = System::Drawing::Size(65, 21);
            this->radioButtonDrawVMain->TabIndex = 2;
            this->radioButtonDrawVMain->TabStop = true;
            this->radioButtonDrawVMain->Text = L"V(x,y)";
            this->radioButtonDrawVMain->UseVisualStyleBackColor = true;
            // 
            // radioButtonDrawV20
            // 
            this->radioButtonDrawV20->AutoSize = true;
            this->radioButtonDrawV20->Location = System::Drawing::Point(6, 48);
            this->radioButtonDrawV20->Name = L"radioButtonDrawV20";
            this->radioButtonDrawV20->Size = System::Drawing::Size(91, 21);
            this->radioButtonDrawV20->TabIndex = 1;
            this->radioButtonDrawV20->TabStop = true;
            this->radioButtonDrawV20->Text = L"V2(0)(x,y)";
            this->radioButtonDrawV20->UseVisualStyleBackColor = true;
            // 
            // radioButtonDrawV0Main
            // 
            this->radioButtonDrawV0Main->AutoSize = true;
            this->radioButtonDrawV0Main->Location = System::Drawing::Point(6, 21);
            this->radioButtonDrawV0Main->Name = L"radioButtonDrawV0Main";
            this->radioButtonDrawV0Main->Size = System::Drawing::Size(83, 21);
            this->radioButtonDrawV0Main->TabIndex = 0;
            this->radioButtonDrawV0Main->TabStop = true;
            this->radioButtonDrawV0Main->Text = L"V(0)(x,y)";
            this->radioButtonDrawV0Main->UseVisualStyleBackColor = true;
            // 
            // groupBox8
            // 
            this->groupBox8->Controls->Add(this->radioButtonYMain);
            this->groupBox8->Controls->Add(this->radioButtonXMain);
            this->groupBox8->Controls->Add(this->radioButtonNullMain);
            this->groupBox8->Location = System::Drawing::Point(6, 377);
            this->groupBox8->Name = L"groupBox8";
            this->groupBox8->Size = System::Drawing::Size(757, 50);
            this->groupBox8->TabIndex = 27;
            this->groupBox8->TabStop = false;
            this->groupBox8->Text = L"��������� �����������";
            // 
            // radioButtonYMain
            // 
            this->radioButtonYMain->AutoSize = true;
            this->radioButtonYMain->Location = System::Drawing::Point(465, 22);
            this->radioButtonYMain->Name = L"radioButtonYMain";
            this->radioButtonYMain->Size = System::Drawing::Size(179, 21);
            this->radioButtonYMain->TabIndex = 2;
            this->radioButtonYMain->TabStop = true;
            this->radioButtonYMain->Text = L"������������ ����� y";
            this->radioButtonYMain->UseVisualStyleBackColor = true;
            // 
            // radioButtonXMain
            // 
            this->radioButtonXMain->AutoSize = true;
            this->radioButtonXMain->Location = System::Drawing::Point(201, 22);
            this->radioButtonXMain->Name = L"radioButtonXMain";
            this->radioButtonXMain->Size = System::Drawing::Size(178, 21);
            this->radioButtonXMain->TabIndex = 1;
            this->radioButtonXMain->TabStop = true;
            this->radioButtonXMain->Text = L"������������ ����� x";
            this->radioButtonXMain->UseVisualStyleBackColor = true;
            // 
            // radioButtonNullMain
            // 
            this->radioButtonNullMain->AutoSize = true;
            this->radioButtonNullMain->Location = System::Drawing::Point(10, 22);
            this->radioButtonNullMain->Name = L"radioButtonNullMain";
            this->radioButtonNullMain->Size = System::Drawing::Size(85, 21);
            this->radioButtonNullMain->TabIndex = 0;
            this->radioButtonNullMain->TabStop = true;
            this->radioButtonNullMain->Text = L"�������";
            this->radioButtonNullMain->UseVisualStyleBackColor = true;
            // 
            // chart2
            // 
            chartArea2->Area3DStyle->Enable3D = true;
            chartArea2->Area3DStyle->IsRightAngleAxes = false;
            chartArea2->Name = L"ChartArea1";
            this->chart2->ChartAreas->Add(chartArea2);
            this->chart2->Location = System::Drawing::Point(769, 0);
            this->chart2->Name = L"chart2";
            this->chart2->Size = System::Drawing::Size(732, 427);
            this->chart2->TabIndex = 26;
            this->chart2->Text = L"chart2";
            // 
            // groupBox4
            // 
            this->groupBox4->Controls->Add(this->groupBox12);
            this->groupBox4->Controls->Add(this->groupBox11);
            this->groupBox4->Location = System::Drawing::Point(1, 565);
            this->groupBox4->Name = L"groupBox4";
            this->groupBox4->Size = System::Drawing::Size(757, 327);
            this->groupBox4->TabIndex = 25;
            this->groupBox4->TabStop = false;
            this->groupBox4->Text = L"�������";
            // 
            // groupBox12
            // 
            this->groupBox12->Controls->Add(this->label32);
            this->groupBox12->Controls->Add(this->label36);
            this->groupBox12->Controls->Add(this->label37);
            this->groupBox12->Controls->Add(this->label38);
            this->groupBox12->Controls->Add(this->label39);
            this->groupBox12->Controls->Add(this->label40);
            this->groupBox12->Location = System::Drawing::Point(3, 198);
            this->groupBox12->Name = L"groupBox12";
            this->groupBox12->Size = System::Drawing::Size(754, 123);
            this->groupBox12->TabIndex = 11;
            this->groupBox12->TabStop = false;
            this->groupBox12->Text = L"����� (2n,2m)";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Location = System::Drawing::Point(6, 29);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(54, 17);
            this->label32->TabIndex = 0;
            this->label32->Text = L"�����:";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Location = System::Drawing::Point(6, 52);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(130, 17);
            this->label36->TabIndex = 1;
            this->label36->Text = L"�������� ������:";
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Location = System::Drawing::Point(271, 78);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(236, 17);
            this->label37->TabIndex = 5;
            this->label37->Text = L"����� ������ � �������� R2_s_2:";
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Location = System::Drawing::Point(271, 29);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(178, 17);
            this->label38->TabIndex = 3;
            this->label38->Text = L"������. �������� ������:";
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Location = System::Drawing::Point(271, 52);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(262, 17);
            this->label39->TabIndex = 4;
            this->label39->Text = L"������� ���� �� ���. �����. R2_0_2:";
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Location = System::Drawing::Point(6, 78);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(124, 17);
            this->label40->TabIndex = 2;
            this->label40->Text = L"���-�� ��������:";
            // 
            // groupBox11
            // 
            this->groupBox11->Controls->Add(this->label27);
            this->groupBox11->Controls->Add(this->label20);
            this->groupBox11->Controls->Add(this->label30);
            this->groupBox11->Controls->Add(this->label21);
            this->groupBox11->Controls->Add(this->label26);
            this->groupBox11->Controls->Add(this->label22);
            this->groupBox11->Controls->Add(this->label24);
            this->groupBox11->Controls->Add(this->label23);
            this->groupBox11->Controls->Add(this->label25);
            this->groupBox11->Location = System::Drawing::Point(0, 21);
            this->groupBox11->Name = L"groupBox11";
            this->groupBox11->Size = System::Drawing::Size(751, 171);
            this->groupBox11->TabIndex = 10;
            this->groupBox11->TabStop = false;
            this->groupBox11->Text = L"����� (n,m)";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Location = System::Drawing::Point(6, 24);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(54, 17);
            this->label27->TabIndex = 0;
            this->label27->Text = L"�����:";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Location = System::Drawing::Point(416, 95);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(90, 17);
            this->label20->TabIndex = 7;
            this->label20->Text = L"� ���� (x, y):";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Location = System::Drawing::Point(6, 121);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(189, 17);
            this->label30->TabIndex = 9;
            this->label30->Text = L"������. �������� �������:";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Location = System::Drawing::Point(289, 70);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(217, 17);
            this->label21->TabIndex = 6;
            this->label21->Text = L"����. �������� ������� |V2-V|:";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Location = System::Drawing::Point(6, 47);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(130, 17);
            this->label26->TabIndex = 1;
            this->label26->Text = L"�������� ������:";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Location = System::Drawing::Point(289, 47);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(220, 17);
            this->label22->TabIndex = 5;
            this->label22->Text = L"����� ������ � �������� Rs_2:";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Location = System::Drawing::Point(6, 95);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(178, 17);
            this->label24->TabIndex = 3;
            this->label24->Text = L"������. �������� ������:";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Location = System::Drawing::Point(289, 24);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(246, 17);
            this->label23->TabIndex = 4;
            this->label23->Text = L"������� ���� �� ���. �����. R0_2:";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Location = System::Drawing::Point(6, 70);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(124, 17);
            this->label25->TabIndex = 2;
            this->label25->Text = L"���-�� ��������:";
            // 
            // buttonCalculateMain
            // 
            this->buttonCalculateMain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->buttonCalculateMain->Location = System::Drawing::Point(3, 514);
            this->buttonCalculateMain->Name = L"buttonCalculateMain";
            this->buttonCalculateMain->Size = System::Drawing::Size(338, 48);
            this->buttonCalculateMain->TabIndex = 15;
            this->buttonCalculateMain->Text = L"���������";
            this->buttonCalculateMain->UseVisualStyleBackColor = true;
            this->buttonCalculateMain->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculateMain_Click);
            // 
            // groupBox6
            // 
            this->groupBox6->Controls->Add(this->radioButtonV2V_main);
            this->groupBox6->Controls->Add(this->radioButtonV2_main);
            this->groupBox6->Controls->Add(this->radioButtonV_main);
            this->groupBox6->Location = System::Drawing::Point(6, 433);
            this->groupBox6->Name = L"groupBox6";
            this->groupBox6->Size = System::Drawing::Size(316, 75);
            this->groupBox6->TabIndex = 24;
            this->groupBox6->TabStop = false;
            this->groupBox6->Text = L"�������� � �������";
            // 
            // radioButtonV2V_main
            // 
            this->radioButtonV2V_main->AutoSize = true;
            this->radioButtonV2V_main->Location = System::Drawing::Point(153, 21);
            this->radioButtonV2V_main->Name = L"radioButtonV2V_main";
            this->radioButtonV2V_main->Size = System::Drawing::Size(144, 21);
            this->radioButtonV2V_main->TabIndex = 2;
            this->radioButtonV2V_main->TabStop = true;
            this->radioButtonV2V_main->Text = L"| V2(x, y) - V(x, y) |";
            this->radioButtonV2V_main->UseVisualStyleBackColor = true;
            // 
            // radioButtonV2_main
            // 
            this->radioButtonV2_main->AutoSize = true;
            this->radioButtonV2_main->Location = System::Drawing::Point(10, 48);
            this->radioButtonV2_main->Name = L"radioButtonV2_main";
            this->radioButtonV2_main->Size = System::Drawing::Size(77, 21);
            this->radioButtonV2_main->TabIndex = 1;
            this->radioButtonV2_main->TabStop = true;
            this->radioButtonV2_main->Text = L"V2(x, y)";
            this->radioButtonV2_main->UseVisualStyleBackColor = true;
            // 
            // radioButtonV_main
            // 
            this->radioButtonV_main->AutoSize = true;
            this->radioButtonV_main->Location = System::Drawing::Point(10, 22);
            this->radioButtonV_main->Name = L"radioButtonV_main";
            this->radioButtonV_main->Size = System::Drawing::Size(69, 21);
            this->radioButtonV_main->TabIndex = 0;
            this->radioButtonV_main->TabStop = true;
            this->radioButtonV_main->Text = L"V(x, y)";
            this->radioButtonV_main->UseVisualStyleBackColor = true;
            // 
            // dataGridView2
            // 
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Location = System::Drawing::Point(769, 439);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->RowTemplate->Height = 24;
            this->dataGridView2->Size = System::Drawing::Size(729, 450);
            this->dataGridView2->TabIndex = 19;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(6, 40);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(757, 213);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 18;
            this->pictureBox1->TabStop = false;
            // 
            // groupBox3
            // 
            this->groupBox3->Controls->Add(this->textBox10);
            this->groupBox3->Controls->Add(this->label29);
            this->groupBox3->Controls->Add(this->textBox5);
            this->groupBox3->Controls->Add(this->label16);
            this->groupBox3->Controls->Add(this->textBox6);
            this->groupBox3->Controls->Add(this->label17);
            this->groupBox3->Controls->Add(this->label18);
            this->groupBox3->Controls->Add(this->label19);
            this->groupBox3->Controls->Add(this->textBox7);
            this->groupBox3->Controls->Add(this->textBox8);
            this->groupBox3->Location = System::Drawing::Point(6, 259);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(757, 112);
            this->groupBox3->TabIndex = 14;
            this->groupBox3->TabStop = false;
            this->groupBox3->Text = L"��������� ������";
            // 
            // textBox10
            // 
            this->textBox10->Location = System::Drawing::Point(465, 78);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(84, 22);
            this->textBox10->TabIndex = 25;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Location = System::Drawing::Point(6, 75);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(305, 17);
            this->label29->TabIndex = 24;
            this->label29->Text = L"�������� ������  w (� ��������� �� 0 �� 2):";
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(465, 50);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(84, 22);
            this->textBox5->TabIndex = 7;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Location = System::Drawing::Point(289, 50);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(163, 17);
            this->label16->TabIndex = 6;
            this->label16->Text = L"����. ���-�� ��������:";
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(465, 22);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(84, 22);
            this->textBox6->TabIndex = 5;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Location = System::Drawing::Point(289, 25);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(126, 17);
            this->label17->TabIndex = 4;
            this->label17->Text = L"�������� ������:";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Location = System::Drawing::Point(7, 50);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(159, 17);
            this->label18->TabIndex = 3;
            this->label18->Text = L"����� ��������� �� y:";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(7, 25);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(158, 17);
            this->label19->TabIndex = 2;
            this->label19->Text = L"����� ��������� �� x:";
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(182, 50);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(84, 22);
            this->textBox7->TabIndex = 1;
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(182, 22);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(84, 22);
            this->textBox8->TabIndex = 0;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->label15->Location = System::Drawing::Point(78, 3);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(172, 25);
            this->label15->TabIndex = 13;
            this->label15->Text = L"�������� ������";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1512, 933);
            this->Controls->Add(this->tabControl1);
            this->Controls->Add(this->label5);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"�� 1. ������� 5. ������� ������ ������� ��� ��������� ��������. ������� ��������."
                L"";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            this->groupBox9->ResumeLayout(false);
            this->groupBox9->PerformLayout();
            this->groupBox7->ResumeLayout(false);
            this->groupBox7->PerformLayout();
            this->groupBox5->ResumeLayout(false);
            this->groupBox5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            this->groupBox10->ResumeLayout(false);
            this->groupBox10->PerformLayout();
            this->groupBox8->ResumeLayout(false);
            this->groupBox8->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
            this->groupBox4->ResumeLayout(false);
            this->groupBox12->ResumeLayout(false);
            this->groupBox12->PerformLayout();
            this->groupBox11->ResumeLayout(false);
            this->groupBox11->PerformLayout();
            this->groupBox6->ResumeLayout(false);
            this->groupBox6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->groupBox3->ResumeLayout(false);
            this->groupBox3->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: 
        int Nmax;
        double eps;
        int n, m;
        double w; // parameter from 0 to 2
        const double PI = 3.141592653589793;
        const double a = 0.0;
        const double b = 2.0;
        const double c = 0.0;
        const double d = 1.0;

    private: 
        double u(double i, double j, int _n, int _m) {
            const double h = (b - a) / _n;
            const double k = (d - c) / _m;
            double x = a + i * h;
            double y = c + j * k;
            return std::exp(std::sin(PI * x * y) * std::sin(PI * x * y));
        }

        double u1_test(double y) {
            return 1.0;
        }

        double u2_test(double y) {
            return std::exp(std::pow(std::sin(2 * PI * y), 2));
        }

        double u3_test(double x) {
            return 1.0;
        }

        double u4_test(double x) {
            return std::exp(std::pow(std::sin(PI * x), 2));
        }

        double f_test(double x, double y) {
            return 0.5 * PI * PI * std::exp(std::pow(std::sin(PI * x * y), 2)) * (-4 * std::cos(2 * PI * x * y) + cos(4 * PI * x * y) - 1) * (x * x + y * y);
        }

        double u1(double y) {
            return -y * (y - 1);
        }

        double u2(double y) {
            return y * (1 - y);
        }

        double u3(double x) {
            return std::abs(std::sin(PI * x));
        }

        double u4(double x) {
            return std::abs(std::sin(PI * x)) * std::exp(x);
        }

        double f_main(double x, double y) {
            return -std::abs(x - y);
        }

        double interpolationXTest(double j, double m) {
            double t;
            double k = (d - c) / m;
            double y = c + j * k;
            t = j / m;
            return (u2_test(y) - u1_test(y)) * t + u1_test(y);
        }

        double interpolationYTest(double i, double n) {
            double t;
            double h = (b - a) / n;
            double x = a + i * h;
            t = i / n;
            return (u4_test(x) - u3_test(x)) * t + u3_test(x);
        }

    private: int Clamp(int value, int min, int max) {
        if (value < min)
            return min;
        if (value > max)
            return max;
        return value;
    }

    private: Color calculateColorRed(double min, double z, double max) {
        int c = (int)Math::Round((max - z) * 255 / (max - min));
        return Color::FromArgb(255, Clamp(c,0,255), Clamp(c,0,255));
    }

    private: Color calculateColorBlue(double min, double z, double max) {
         int c = (int)Math::Round((max - z) * 255 / (max - min));
         return Color::FromArgb(Clamp(c, 0, 255), Clamp(c, 0, 255), 255);
    }
     
    private: Color calculateColorPurple(double min, double z, double max) {
        int c = (int)Math::Round((max - z) * 255 / (max - min));
        return Color::FromArgb(255, Clamp(c, 0, 255), 255);
    }

   

    System::Void buttonCalculateTest_Click(System::Object^  sender, System::EventArgs^  e) {
        w = Convert::ToDouble(textBox9->Text);
        n = Convert::ToInt32(textBox1->Text);
        m = Convert::ToInt32(textBox2->Text);
        eps = Convert::ToDouble(textBox3->Text);
        Nmax = Convert::ToInt32(textBox4->Text);

       /* int n_2 = 2 * n;
        int m_2 = 2 * m;*/

        int s = 0;
        double eps_max = 0.0;
        double eps_cur = 0.0;
        double solve_err = 0.0;
        double solve_eps = 0.0;
        double a2, k2, h2; // a2_2, k2_2, h2_2;
        double h = (b - a) / n;
        double k = (d - c) / m;
        /*double h_2 = (b - a) / n_2;
        double k_2 = (d - c) / m_2;*/

        double uv_max = 0.0;
        double x_max, y_max;

        std::vector<std::vector<double>> v(n + 1, std::vector<double>(m + 1, 0.0));
        std::vector<std::vector<double>> f(n + 1, std::vector<double>(m + 1, 0.0));
        std::vector<std::vector<double>> R(n + 1, std::vector<double>(m + 1, 0.0));

        /*std::vector<std::vector<double>> v2(n_2 + 1, std::vector<double>(m_2 + 1, 0.0));
        std::vector<std::vector<double>> f2(n_2 + 1, std::vector<double>(m_2 + 1, 0.0));*/

        double v_old; // v_old2;
        double v_new; // v_new2;
        double R_N_2 = 0.0;
        double R_0_2 = 0.0;
        bool flag = false;

        h2 = -(1 / (h * h));
        k2 = -(1 / (k * k));
        a2 = -2 * (h2 + k2);

        /*h2_2 = -(1 / (h_2 * h_2));
        k2_2 = -(1 / (k_2 * k_2));
        a2_2 = -2 * (h2_2 + k2_2);*/

        if (radioButtonNullTest->Checked) {
            //it's ok
        }

        if (radioButtonXTest->Checked) {
            for (int j = 1; j < m; j++)
                for (int i = 1; i < n; i++) {
                    v[i][j] = interpolationXTest(j, m);
                }

           /* for (int j = 1; j < m_2; j++)
                for (int i = 1; i < n_2; i++) {
                    v2[i][j] = interpolationXTest(j, m_2);
                }*/
        }

        if (radioButtonYTest->Checked) {
            for (int j = 1; j < m; j++)
                for (int i = 1; i < n; i++) {
                    v[i][j] = interpolationYTest(i, n);
                }

           /* for (int j = 1; j < m_2; j++)
                for (int i = 1; i < n_2; i++) {
                    v2[i][j] = interpolationYTest(i, n_2);
                }*/
        }

        // initialize u1(y), u2(y) for (n, m)
        for (int j = 0; j <= m; j++) {
            double y = c + j * k;
            v[0][j] = u1_test(y);
            v[n][j] = u2_test(y);
        }

        //// initialize u1(y), u2(y) for (2n, 2m)
        //for (int j = 0; j <= m_2; j++) {
        //    double y = c + j * k_2;
        //    v2[0][j] = u1_test(y);
        //    v2[n_2][j] = u2_test(y);
        //}

        // initialize u3(x), u4(x) for (n, m)
        for (int i = 0; i <= n; i++) {
            double x = a + i * h;
            v[i][0] = u3_test(x);
            v[i][m] = u4_test(x);
        }
        //// initialize u3(x), u4(x) for (2n, 2m)
        //for (int i = 0; i <= n_2; i++) {
        //    double x = a + i * h_2;
        //    v2[i][0] = u3_test(x);
        //    v2[i][m_2] = u4_test(x);
        //}

        // initialize f(x,y) for (n, m)
        for (int j = 0; j <= m; j++)
            for (int i = 0; i <= n; i++) {
                double x = a + i * h;
                double y = c + j * k;
                f[i][j] = f_test(x, y);
            }

        //// initialize f(x,y) for (2n, 2m)
        //for (int j = 0; j <= m_2; j++)
        //    for (int i = 0; i <= n_2; i++) {
        //        double x = a + i * h_2;
        //        double y = c + j * k_2;
        //        f2[i][j] = f_test(x, y);
        //    }

        // calculate R for null iteration, (n, m)
        for (int j = 1; j < m; j++)
            for (int i = 1; i < n; i++) {
                R[i][j] = a2 * v[i][j] + h2 * v[i + 1][j] + h2 * v[i - 1][j] + k2 * v[i][j + 1] + k2 * v[i][j - 1] - f[i][j];
            }

        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++) {
                R_0_2 += R[i][j] * R[i][j];
            }
        R_0_2 = std::sqrt(R_0_2);
        // end of calculating R for null iteration, (n, m)

        this->chart1->Series->Clear();

        if (radioButtonDrawV0->Checked) {
            chart1->ChartAreas[0]->RecalculateAxesScale();
            double x, y, z;
            double xstep = (b - a) / n, ystep = (d - c) / m;
            double max = v[0][0], min = max;
            Color Color1, Color2;
            for (x = a; x <= b; x += xstep)
                for (y = c; y <= d; y += ystep) {
                    int i = int((x - a) / xstep);
                    int j = int((y - c) / ystep);
                    z = v[i][j];
                    if (z > max) max = z;
                    else if (z < min) min = z;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart1->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x = a + i * xstep;
                    y = c + j * ystep;
                    z = v[i][j];
                    chart1->Series[i]->Points->AddXY((double)y, z);
                    Color1 = calculateColorBlue(min, z, max);
                    chart1->Series[i]->Points[j]->Color = Color1;
                    chart1->Series[i]->Points[j]->BackSecondaryColor = Color1;
                }
            }
        }

        // MVR
        while (!flag) {
            eps_max = 0.0;
            // (n, m)
            for (int j = 1; j < m; j++) {
                for (int i = 1; i < n; i++) {
                    v_old = v[i][j];
                    v_new = -w * (h2 * v[i + 1][j] + h2 * v[i - 1][j] + k2 * v[i][j + 1] + k2 * v[i][j - 1]);
                    v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];
                    v_new = v_new / a2;
                    v[i][j] = v_new;
                    R[i][j] = a2 * v[i][j] + h2 * v[i + 1][j] + h2 * v[i - 1][j] + k2 * v[i][j + 1] + k2 * v[i][j - 1] - f[i][j];
                    eps_cur = std::abs(v_old - v_new);
                    if (eps_cur > eps_max) {
                        eps_max = eps_cur;
                    }
                }
            }

            s++;
            if ((eps_max <= eps) || (s >= Nmax)) {
                flag = true;
            }
        }
        // End MVR

        R_N_2 = 0.0;
        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++) {
                R_N_2 += R[i][j] * R[i][j];
            }
        R_N_2 = std::sqrt(R_N_2);

        for (int j = 0; j < m + 1; j++)
            for (int i = 0; i < n + 1; i++) {
                /*if (std::abs(v2[2 * i][2 * j] - v[i][j]) > solve_eps) {
                    solve_eps = std::abs(v2[2 * i][2 * j] - v[i][j]);
                }*/

                if (std::abs(u(i, j, n, m) - v[i][j]) > solve_err) {
                    solve_err = std::abs(u(i, j, n, m) - v[i][j]);
                }

            }

        this->label6->Text = "�����:    ����� ������� ����������";
        this->label7->Text = ("�������� ������:" + "   " + Convert::ToString(w));
        this->label31->Text = ("����������� �������� ������:" + "   " + Convert::ToString(eps_max));
        this->label8->Text = ("���������� ��������:" + "   " + Convert::ToString(s));
        this->label9->Text = ("����������� ����������� �������:" + "   " + Convert::ToString(solve_err));
        this->label10->Text = ("������� ���� �� ���. ����������� R0_2:" + "   " + Convert::ToString(round(R_0_2 * 1e8) / 1e8));
        this->label11->Text = ("����� �� ����� ������ � �������� Rs_2:" + "   " + Convert::ToString(R_N_2));


        for (int j = 0; j < m + 1; j++)
            for (int i = 0; i < n + 1; i++) {
                if (std::abs(u(i, j, n, m) - v[i][j]) > uv_max) {
                    uv_max = std::abs(u(i, j, n, m) - v[i][j]);
                    x_max = a + i * h;
                    y_max = c + j * k;
                }
            }

        this->label12->Text = ("����. �������� ���� ������� |U-V|:" + "   " + Convert::ToString(round(uv_max * 1e8) / 1e8));
        this->label13->Text = ("� ���� (x, y):" + "   (" + Convert::ToString(round(x_max * 1e8) / 1e8) + ", " + Convert::ToString(round(y_max * 1e8) / 1e8) + ")");

        if (this->radioButtonU->Checked) {
            dataGridView1->Rows->Clear();
            dataGridView1->Columns->Clear();
            this->dataGridView1->Columns->Add("", "i / j");
            for (int j = m; j >= 0; j--) {
                this->dataGridView1->Rows->Add(Convert::ToString(j));
            }

            for (int i = 0; i <= n; i++) {
                this->dataGridView1->Columns->Add("", Convert::ToString(i));
            }

            for (int i = 0; i <= n; i++)
                for (int j = 0; j <= m; j++)
                    this->dataGridView1->Rows[m - j]->Cells[i + 1]->Value = round(u(i,j,n,m) * 1e8) / 1e8;
        }

        if (this->radioButtonV->Checked) {
            dataGridView1->Rows->Clear();
            dataGridView1->Columns->Clear();
            this->dataGridView1->Columns->Add("", "j / i");
            for (int j = m; j >= 0; j--) {
                this->dataGridView1->Rows->Add(Convert::ToString(j));
            }

            for (int i = 0; i <= n; i++) {
                this->dataGridView1->Columns->Add("", Convert::ToString(i));
            }

            for (int i = 0; i <= n; i++)
                for (int j = 0; j <= m; j++)
                    this->dataGridView1->Rows[m - j]->Cells[i + 1]->Value = round(v[i][j] * 1e8) / 1e8;
        }

        if (this->radioButtonV2V->Checked) {
            dataGridView1->Rows->Clear();
            dataGridView1->Columns->Clear();
            this->dataGridView1->Columns->Add("", "j / i");
            for (int j = m; j >= 0; j--) {
                this->dataGridView1->Rows->Add(Convert::ToString(j));
            }

            for (int i = 0; i <= n; i++) {
                this->dataGridView1->Columns->Add("", Convert::ToString(i));
            }

            for (int i = 0; i <= n; i++)
                for (int j = 0; j <= m; j++)
                    this->dataGridView1->Rows[m - j]->Cells[i + 1]->Value = round(std::abs(u(i,j,n,m) - v[i][j]) * 1e8) / 1e8;
        }

        if (radioButtonDrawU->Checked) {
            chart1->ChartAreas[0]->RecalculateAxesScale();
            double x, y, z;
            double xstep = (b - a) / n, ystep = (d - c) / m;
            double max = u(a, c, n, m), min = max;
            Color Color1, Color2;
            for (x = a; x <= b; x += xstep)
                for (y = c; y <= d; y += ystep) {
                    int i = int((x - a) / xstep);
                    int j = int((y - c) / ystep);
                    z = u(i, j, n, m);
                    if (z > max) max = z;
                    else if (z < min) min = z;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart1->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x = a + i * xstep;
                    y = c + j * ystep;
                    z = u(i, j, n, m);
                    chart1->Series[i]->Points->AddXY((double)y, z);
                    Color1 = calculateColorPurple(min, z, max);
                    chart1->Series[i]->Points[j]->Color = Color1;
                    chart1->Series[i]->Points[j]->BackSecondaryColor = Color1;
                }
            }
        }

        if (radioButtonDrawV->Checked) {
            chart1->ChartAreas[0]->RecalculateAxesScale();
            double x, y, z;
            double xstep = (b - a) / n, ystep = (d - c) / m;
            double max = u(a, c, n, m), min = max;
            Color Color1, Color2;
            for (x = a; x <= b; x += xstep)
                for (y = c; y <= d; y += ystep) {
                    int i = int((x - a) / xstep);
                    int j = int((y - c) / ystep);
                    z = v[i][j];
                    if (z > max) max = z;
                    else if (z < min) min = z;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart1->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x = a + i * xstep;
                    y = c + j * ystep;
                    z = u(i, j, n, m);
                    chart1->Series[i]->Points->AddXY((double)y, z);
                    Color1 = calculateColorBlue(min, z, max);
                    chart1->Series[i]->Points[j]->Color = Color1;
                    chart1->Series[i]->Points[j]->BackSecondaryColor = Color1;
                }
            }
        }

        if (radioButtonDrawUV->Checked) {
            chart1->ChartAreas[0]->RecalculateAxesScale();
            double x, y, z;
            double xstep = (b - a) / n, ystep = (d - c) / m;
            double max = u(a, c, n, m)-v[0][0], min = max;
            Color Color1, Color2;
            for (x = a; x <= b; x += xstep)
                for (y = c; y <= d; y += ystep) {
                    int i = int((x - a) / xstep);
                    int j = int((y - c) / ystep);
                    z = u(i,j,n,m) - v[i][j];
                    if (z > max) max = z;
                    else if (z < min) min = z;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart1->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x = a + i * xstep;
                    y = c + j * ystep;
                    z = u(i, j, n, m)-v[i][j];
                    chart1->Series[i]->Points->AddXY((double)y, z);
                    Color1 = calculateColorRed(min, z, max);
                    chart1->Series[i]->Points[j]->Color = Color1;
                    chart1->Series[i]->Points[j]->BackSecondaryColor = Color1;
                }
            }
        }
    }

    System::Void buttonCalculateMain_Click(System::Object^  sender, System::EventArgs^  e) {
        w = Convert::ToDouble(textBox10->Text);
        n = Convert::ToInt32(textBox8->Text);
        m = Convert::ToInt32(textBox7->Text);
        eps = Convert::ToDouble(textBox6->Text);
        Nmax = Convert::ToInt32(textBox5->Text);

        int n_2 = 2 * n;
        int m_2 = 2 * m;

        double w2 = w;

        int s = 0, s2 = 0;
        double eps_max = 0.0, eps_max2 = 0.0;
        double eps_cur = 0.0, eps_curr2 = 0.0;
        double solve_eps = 0.0;
        double a2, k2, h2, a2_2, k2_2, h2_2;
        double h = (b - a) / n;
        double k = (d - c) / m;
        double h_2 = (b - a) / n_2;
        double k_2 = (d - c) / m_2;

        double v2v_max = 0.0;
        double x_max, y_max;

        std::vector<std::vector<double>> v(n + 1, std::vector<double>(m + 1, 0.0));
        std::vector<std::vector<double>> f(n + 1, std::vector<double>(m + 1, 0.0));
        std::vector<std::vector<double>> R(n + 1, std::vector<double>(m + 1, 0.0));

        std::vector<std::vector<double>> v2(n_2 + 1, std::vector<double>(m_2 + 1, 0.0));
        std::vector<std::vector<double>> f2(n_2 + 1, std::vector<double>(m_2 + 1, 0.0));
        std::vector<std::vector<double>> R2(n_2 + 1, std::vector<double>(m_2 + 1, 0.0));

        double v_old, v_old2;
        double v_new, v_new2;
        double R_N_2 = 0.0, R2_N_2 = 0.0;
        double R_0_2 = 0.0, R2_0_2 = 0.0;
        bool flag = false, flag2 = false;

        h2 = -(1 / (h * h));
        k2 = -(1 / (k * k));
        a2 = -2 * (h2 + k2);

        h2_2 = -(1 / (h_2 * h_2));
        k2_2 = -(1 / (k_2 * k_2));
        a2_2 = -2 * (h2_2 + k2_2);

        if (radioButtonNullMain->Checked) {
            //it's ok
        }

        if (radioButtonXMain->Checked) {
            for (int j = 1; j < m; j++)
                for (int i = 1; i < n; i++) {
                    v[i][j] = interpolationXTest(j, m);
                }

            for (int j = 1; j < m_2; j++)
                for (int i = 1; i < n_2; i++) {
                    v2[i][j] = interpolationXTest(j, m_2);
                }
        }

        if (radioButtonYMain->Checked) {
            for (int j = 1; j < m; j++)
                for (int i = 1; i < n; i++) {
                    v[i][j] = interpolationYTest(i, n);
                }

            for (int j = 1; j < m_2; j++)
                for (int i = 1; i < n_2; i++) {
                    v2[i][j] = interpolationYTest(i, n_2);
                }
        }

        // initialize u1(y), u2(y) for (n, m)
        for (int j = 0; j <= m; j++) {
            double y = c + j * k;
            v[0][j] = u1(y);
            v[n][j] = u2(y);
        }

        // initialize u3(x), u4(x) for (n, m)
        for (int i = 0; i <= n; i++) {
            double x = a + i * h;
            v[i][0] = u3(x);
            v[i][m] = u4(x);
        }

        // initialize f(x,y) for (n, m)
        for (int j = 0; j <= m; j++)
            for (int i = 0; i <= n; i++) {
                double x = a + i * h;
                double y = c + j * k;
                f[i][j] = f_main(x,y);
            }
        // initialize u1(y), u2(y) for (2n, 2m)
        for (int j = 0; j <= m_2; j++) {
            double y = c + j * k_2;
            v2[0][j] = u1(y);
            v2[n_2][j] = u2(y);
        }

        // initialize u3(x), u4(x) for (2n, 2m)
        for (int i = 0; i <= n_2; i++) {
            double x = a + i * h_2;
            v2[i][0] = u3(x);
            v2[i][m_2] = u4(x);
        }

        // initialize f(x,y) for (2n, 2m)
        for (int j = 0; j <= m_2; j++)
            for (int i = 0; i <= n_2; i++) {
                double x = a + i * h_2;
                double y = c + j * k_2;
                f2[i][j] = f_main(x,y);
            }

        // calculate R0 (n,m)
        for (int j = 1; j < m; j++)
            for (int i = 1; i < n; i++) {
                R[i][j] = a2 * v[i][j] + (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])) - f[i][j];
            }

        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++) {
                R_0_2 += R[i][j] * R[i][j];
            }
        R_0_2 = std::sqrt(R_0_2);
        // end of calculating R0 (n,m)

        // calculate R0 (2n,2m)
        for (int j = 1; j < m_2; j++)
            for (int i = 1; i < n_2; i++) {
                R2[i][j] = a2_2 * v2[i][j] + (h2_2 * (v2[i + 1][j] + v2[i - 1][j]) + k2_2 * (v2[i][j + 1] + v2[i][j - 1])) - f2[i][j];
            }

        for (int i = 0; i < n_2 + 1; i++)
            for (int j = 0; j < m_2 + 1; j++) {
                R2_0_2 += R2[i][j] * R2[i][j];
            }
        R2_0_2 = std::sqrt(R2_0_2);
        // end of calculating R0 (2n,2m)

        this->chart2->Series->Clear();

        if (radioButtonDrawV0Main->Checked) {
            chart2->ChartAreas[0]->RecalculateAxesScale();
            double x, y, z;
            double xstep = (b - a) / n, ystep = (d - c) / m;
            double max = v[0][0], min = max;
            Color Color1;
            for (x = a; x <= b; x += xstep)
                for (y = c; y <= d; y += ystep) {
                    int i = int((x - a) / xstep);
                    int j = int((y - c) / ystep);
                    z = v[i][j];
                    if (z > max) max = z;
                    else if (z < min) min = z;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart2->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x = a + i * xstep;
                    y = c + j * ystep;
                    z = v[i][j];
                    chart2->Series[i]->Points->AddXY((double)y, z);
                    Color1 = calculateColorBlue(min, z, max);
                    chart2->Series[i]->Points[j]->Color = Color1;
                    chart2->Series[i]->Points[j]->BackSecondaryColor = Color1;
                }
            }
        }

        if (radioButtonDrawV20->Checked) {
            chart2->ChartAreas[0]->RecalculateAxesScale();
            double x, y, z;
            double xstep = (b - a) / n_2, ystep = (d - c) / m_2;
            double max = v2[0][0], min = max;
            Color Color1;
            for (x = a; x <= b; x += xstep)
                for (y = c; y <= d; y += ystep) {
                    int i = int((x - a) / xstep);
                    int j = int((y - c) / ystep);
                    z = v2[i][j];
                    if (z > max) max = z;
                    else if (z < min) min = z;
                }
            for (int i = 0; i <= n_2; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart2->Series->Add(Series1);
                for (int j = 0; j <= m_2; j++) {
                    x = a + i * xstep;
                    y = c + j * ystep;
                    z = v2[i][j];
                    chart2->Series[i]->Points->AddXY((double)y, z);
                    Color1 = calculateColorPurple(min, z, max);
                    chart2->Series[i]->Points[j]->Color = Color1;
                    chart2->Series[i]->Points[j]->BackSecondaryColor = Color1;
                }
            }
        }

        while (!flag2) {
            eps_max2 = 0.0;

            // (2n, 2m)
            for (int j = 1; j < m_2; j++) {
                for (int i = 1; i < n_2; i++) {
                    v_old2 = v2[i][j];
                    v_new2 = -w2 * (h2_2 * (v2[i + 1][j] + v2[i - 1][j]) + k2_2 * (v2[i][j + 1] + v2[i][j - 1]));
                    v_new2 = v_new2 + (1 - w2) * a2_2 * v2[i][j] + w2 * f2[i][j];
                    v_new2 = v_new2 / a2_2;
                    R2[i][j] = a2_2 * v2[i][j] + (h2_2*(v2[i + 1][j] + v2[i - 1][j]) + k2_2* (v2[i][j + 1] + v2[i][j - 1])) - f2[i][j];
                    eps_curr2 = std::abs(v_old2 - v_new2);
                    if (eps_curr2 > eps_max2) {
                        eps_max2 = eps_curr2;
                    }
                    v2[i][j] = v_new2;
                }
            }

            s2++;
            if ((eps_max2 <= eps) || (s2 >= Nmax)) {
                flag2 = true;
            }
        }


        while (!flag) {
            eps_max = 0.0;

            // (n, m)
            for (int j = 1; j < m; j++) {
                for (int i = 1; i < n; i++) {
                    v_old = v[i][j];
                    v_new = -w * (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
                    v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];
                    v_new = v_new / a2;
                    R[i][j] = a2 * v[i][j] + (h2*(v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])) - f[i][j];
                    eps_cur = std::abs(v_old - v_new);
                    if (eps_cur > eps_max) {
                        eps_max = eps_cur;
                    }
                    v[i][j] = v_new;
                }
            }

            s++;
            if ((eps_max <= eps) || (s >= Nmax)) {
                flag = true;
            }
        }

        R_N_2 = 0.0;
        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++) {
                R_N_2 += R[i][j] * R[i][j];
            }
        R_N_2 = std::sqrt(R_N_2);

        R2_N_2 = 0.0;
        for (int i = 0; i < n_2 + 1; i++)
            for (int j = 0; j < m_2 + 1; j++) {
                R2_N_2 += R2[i][j] * R2[i][j];
            }
        R2_N_2 = std::sqrt(R2_N_2);

        for (int j = 0; j < m + 1; j++)
            for (int i = 0; i < n + 1; i++) {
                if (std::abs(v2[2 * i][2 * j] - v[i][j]) > solve_eps) {
                    solve_eps = std::abs(v2[2 * i][2 * j] - v[i][j]);
                }

            }

        this->label27->Text = "�����:    ����� ������� ����������";
        this->label26->Text = ("�������� ������:" + "   " + Convert::ToString(w));
        this->label25->Text = ("���������� ��������:" + "   " + Convert::ToString(s));
        this->label24->Text = ("������. �������� ������:" + "   " + Convert::ToString(eps_max));
        this->label23->Text = ("������� ���� �� ���. ����������� R0_2:" + "   " + Convert::ToString(round(R_0_2 * 1e8) / 1e8));
        this->label22->Text = ("����� �� ����� ������ � �������� Rs_2:" + "   " + Convert::ToString(R_N_2));
        this->label30->Text = ("������. �������� �������:" + "   " + Convert::ToString(solve_eps));

        this->label32->Text = "�����:    ����� ������� ����������";
        this->label36->Text = ("�������� ������:" + "   " + Convert::ToString(w2));
        this->label40->Text = ("���������� ��������:" + "   " + Convert::ToString(s2));
        this->label38->Text = ("������. �������� ������:" + "   " + Convert::ToString(eps_max2));
        this->label39->Text = ("������� ���� �� ���. ����������� R2_0_2:" + "   " + Convert::ToString(round(R2_0_2 * 1e8) / 1e8));
        this->label37->Text = ("����� �� ����� ������ � �������� R2_s_2:" + "   " + Convert::ToString(R2_N_2));

        for (int j = 0; j <= m; j++)
            for (int i = 0; i <= n; i++) {
                if (std::abs(v2[2 * i][2 * j] - v[i][j]) > v2v_max) {
                    v2v_max = std::abs(v2[2 * i][2 * j] - v[i][j]);
                    x_max = a + i * h;
                    y_max = c + j * k;
                }
            }

        this->label21->Text = ("����. �������� ���� ������� |V2-V|:" + "   " + Convert::ToString(round(v2v_max * 1e8) / 1e8));
        this->label20->Text = ("� ���� (x, y):" + "   (" + Convert::ToString(round(x_max * 1e8) / 1e8) + ", " + Convert::ToString(round(y_max * 1e8) / 1e8) + ")");

        if (this->radioButtonV_main->Checked) {
            dataGridView2->Rows->Clear();
            dataGridView2->Columns->Clear();
            this->dataGridView2->Columns->Add("", "j / i");
            for (int j = m; j >= 0; j--) {
                this->dataGridView2->Rows->Add(Convert::ToString(j));
            }

            for (int i = 0; i <= n; i++) {
                this->dataGridView2->Columns->Add("", Convert::ToString(i));
            }

            for (int j = 0; j <= m; j++)
                for (int i = 0; i <= n; i++)
                    this->dataGridView2->Rows[m - j]->Cells[i + 1]->Value = round(v[i][j] * 1e8) / 1e8;
        }

        if (this->radioButtonV2_main->Checked) {
            dataGridView2->Rows->Clear();
            dataGridView2->Columns->Clear();
            this->dataGridView2->Columns->Add("", "j / i");
            for (int j = m_2; j >= 0; j--) {
                this->dataGridView2->Rows->Add(Convert::ToString(j));
            }

            for (int i = 0; i <= n_2; i++) {
                this->dataGridView2->Columns->Add("", Convert::ToString(i));
            }

            for (int i = 0; i <= n_2; i++)
                for (int j = 0; j <= m_2; j++)
                    this->dataGridView2->Rows[m_2 - j]->Cells[i + 1]->Value = round(v2[i][j] * 1e8) / 1e8;
        }

        if (this->radioButtonV2V_main->Checked) {
            dataGridView2->Rows->Clear();
            dataGridView2->Columns->Clear();
            this->dataGridView2->Columns->Add("", "j / i");
            for (int j = m; j >= 0; j--) {
                this->dataGridView2->Rows->Add(Convert::ToString(j));
            }

            for (int i = 0; i <= n; i++) {
                this->dataGridView2->Columns->Add("", Convert::ToString(i));
            }

            for (int i = 0; i <= n; i++)
                for (int j = 0; j <= m; j++)
                    this->dataGridView2->Rows[m - j]->Cells[i + 1]->Value = round(std::abs(v2[2 * i][2 * j] - v[i][j]) * 1e8) / 1e8;
        }


        if (radioButtonDrawVMain->Checked) {
            chart2->ChartAreas[0]->RecalculateAxesScale();
            double x, y, z;
            double xstep = (b - a) / n, ystep = (d - c) / m;
            double max = v[0][0], min = max;
            Color Color1;
            for (x = a; x <= b; x += xstep)
                for (y = c; y <= d; y += ystep) {
                    int i = int((x - a) / xstep);
                    int j = int((y - c) / ystep);
                    z = v[i][j];
                    if (z > max) max = z;
                    else if (z < min) min = z;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart2->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x = a + i * xstep;
                    y = c + j * ystep;
                    z = v[i][j];
                    chart2->Series[i]->Points->AddXY((double)y, z);
                    Color1 = calculateColorBlue(min, z, max);
                    chart2->Series[i]->Points[j]->Color = Color1;
                    chart2->Series[i]->Points[j]->BackSecondaryColor = Color1;
                }
            }
        }

        if (radioButtonDrawV2->Checked) {
            chart2->ChartAreas[0]->RecalculateAxesScale();
            double x, y, z;
            double xstep = (b - a) / n_2, ystep = (d - c) / m_2; //����
            double max = v2[0][0], min = max;
            Color Color1;
            for (x = a; x <= b; x += xstep)
                for (y = c; y <= d; y += ystep) {
                    int i = int((x - a) / xstep);
                    int j = int((y - c) / ystep);
                    z = v2[i][j];
                    if (z > max) max = z;
                    else if (z < min) min = z;
                }
            for (int i = 0; i <= n_2; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart2->Series->Add(Series1);
                for (int j = 0; j <= m_2; j++) {
                    x = a + i * xstep;
                    y = c + j * ystep;
                    z = v2[i][j];
                    chart2->Series[i]->Points->AddXY((double)y, z);
                    Color1 = calculateColorPurple(min, z, max);
                    chart2->Series[i]->Points[j]->Color = Color1;
                    chart2->Series[i]->Points[j]->BackSecondaryColor = Color1;
                }
            }
        }
        
        if (radioButtonDrawVV2->Checked) {
            chart2->ChartAreas[0]->RecalculateAxesScale();
            double x, y, z;
            double xstep = (b - a) / n, ystep = (d - c) / m;
            double max = v[0][0] - v2[0][0], min = max;
            Color Color1;
            for (x = a; x <= b; x += xstep)
                for (y = c; y <= d; y += ystep) {
                    int i = int((x - a) / xstep);
                    int j = int((y - c) / ystep);
                    z = v[i][j] - v2[2 * i][2 * j];
                    if (z > max) max = z;
                    else if (z < min) min = z;
                }
            for (int i = 0; i <= n; i++) {
                Series^ Series1 = gcnew Series();
                Series1->ChartType = SeriesChartType::Spline;
                Series1->Color = Color::Blue;
                chart2->Series->Add(Series1);
                for (int j = 0; j <= m; j++) {
                    x = a + i * xstep;
                    y = c + j * ystep;
                    z = v[i][j] - v2[2 * i][2 * j];
                    chart2->Series[i]->Points->AddXY((double)y, z);
                    Color1 = calculateColorRed(min, z, max);
                    chart2->Series[i]->Points[j]->Color = Color1;
                    chart2->Series[i]->Points[j]->BackSecondaryColor = Color1;
                }
            }
        }
    }
};
    }
