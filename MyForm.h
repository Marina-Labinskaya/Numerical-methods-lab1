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
	/// Сводка для MyForm
	/// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: добавьте код конструктора
            //
        }

    protected:
        /// <summary>
        /// Освободить все используемые ресурсы.
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




    private: System::Windows::Forms::Button^  button2;


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










    private: System::Windows::Forms::Button^  button1;
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

    private: System::Windows::Forms::RadioButton^  radioButtonV2;

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











    protected:

    private:
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonV2V = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonV2 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonV = (gcnew System::Windows::Forms::RadioButton());
            this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonV2V_main = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonV2_main = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonV_main = (gcnew System::Windows::Forms::RadioButton());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
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
            this->groupBox5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->tabPage2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
            this->groupBox4->SuspendLayout();
            this->groupBox6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->groupBox3->SuspendLayout();
            this->SuspendLayout();
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->label13);
            this->groupBox1->Controls->Add(this->label12);
            this->groupBox1->Controls->Add(this->label11);
            this->groupBox1->Controls->Add(this->label10);
            this->groupBox1->Controls->Add(this->label9);
            this->groupBox1->Controls->Add(this->label8);
            this->groupBox1->Controls->Add(this->label7);
            this->groupBox1->Controls->Add(this->label6);
            this->groupBox1->Location = System::Drawing::Point(3, 513);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(577, 216);
            this->groupBox1->TabIndex = 5;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Справка";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(360, 190);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(90, 17);
            this->label13->TabIndex = 7;
            this->label13->Text = L"В узле (x, y):";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(7, 190);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(249, 17);
            this->label12->TabIndex = 6;
            this->label12->Text = L"Макс. разность двух решений |V2-V|:";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(6, 163);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(281, 17);
            this->label11->TabIndex = 5;
            this->label11->Text = L"Схема на сетке решена с невязкой Rs_2:";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(6, 135);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(291, 17);
            this->label10->TabIndex = 4;
            this->label10->Text = L"Невязка СЛАУ на нач. приближении R0_2:";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(7, 107);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(237, 17);
            this->label9->TabIndex = 3;
            this->label9->Text = L"Достигнутая погрешность метода:";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(7, 77);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(124, 17);
            this->label8->TabIndex = 2;
            this->label8->Text = L"Кол-во итераций:";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(6, 50);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(130, 17);
            this->label7->TabIndex = 1;
            this->label7->Text = L"Параметр метода:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(7, 22);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(54, 17);
            this->label6->TabIndex = 0;
            this->label6->Text = L"Метод:";
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
            this->groupBox2->Location = System::Drawing::Point(6, 258);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(577, 114);
            this->groupBox2->TabIndex = 6;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Параметры метода";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Location = System::Drawing::Point(7, 75);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(310, 17);
            this->label28->TabIndex = 23;
            this->label28->Text = L"Параметр метода  w (в интервале от 0 до 2)):";
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
            this->label4->Text = L"Макс. кол-во итераций:";
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
            this->label3->Size = System::Drawing::Size(151, 17);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Погрешность метода:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(6, 50);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(159, 17);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Число разбиений по y:";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(7, 25);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(158, 17);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Число разбиений по x:";
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
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->button2->Location = System::Drawing::Point(6, 378);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(340, 48);
            this->button2->TabIndex = 10;
            this->button2->Text = L"Вычислить";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Location = System::Drawing::Point(7, 3);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1377, 764);
            this->tabControl1->TabIndex = 13;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->groupBox5);
            this->tabPage1->Controls->Add(this->chart1);
            this->tabPage1->Controls->Add(this->dataGridView1);
            this->tabPage1->Controls->Add(this->groupBox1);
            this->tabPage1->Controls->Add(this->pictureBox2);
            this->tabPage1->Controls->Add(this->label14);
            this->tabPage1->Controls->Add(this->groupBox2);
            this->tabPage1->Controls->Add(this->button2);
            this->tabPage1->Location = System::Drawing::Point(4, 25);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(1369, 735);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Тестовая задача";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // groupBox5
            // 
            this->groupBox5->Controls->Add(this->radioButtonV2V);
            this->groupBox5->Controls->Add(this->radioButtonV2);
            this->groupBox5->Controls->Add(this->radioButtonV);
            this->groupBox5->Location = System::Drawing::Point(0, 432);
            this->groupBox5->Name = L"groupBox5";
            this->groupBox5->Size = System::Drawing::Size(568, 75);
            this->groupBox5->TabIndex = 23;
            this->groupBox5->TabStop = false;
            this->groupBox5->Text = L"Показать в таблице";
            // 
            // radioButtonV2V
            // 
            this->radioButtonV2V->AutoSize = true;
            this->radioButtonV2V->Location = System::Drawing::Point(153, 21);
            this->radioButtonV2V->Name = L"radioButtonV2V";
            this->radioButtonV2V->Size = System::Drawing::Size(144, 21);
            this->radioButtonV2V->TabIndex = 2;
            this->radioButtonV2V->TabStop = true;
            this->radioButtonV2V->Text = L"| V2(x, y) - V(x, y) |";
            this->radioButtonV2V->UseVisualStyleBackColor = true;
            // 
            // radioButtonV2
            // 
            this->radioButtonV2->AutoSize = true;
            this->radioButtonV2->Location = System::Drawing::Point(10, 48);
            this->radioButtonV2->Name = L"radioButtonV2";
            this->radioButtonV2->Size = System::Drawing::Size(77, 21);
            this->radioButtonV2->TabIndex = 1;
            this->radioButtonV2->TabStop = true;
            this->radioButtonV2->Text = L"V2(x, y)";
            this->radioButtonV2->UseVisualStyleBackColor = true;
            // 
            // radioButtonV
            // 
            this->radioButtonV->AutoSize = true;
            this->radioButtonV->Location = System::Drawing::Point(10, 22);
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
            this->chart1->Location = System::Drawing::Point(589, 6);
            this->chart1->Name = L"chart1";
            this->chart1->Size = System::Drawing::Size(760, 404);
            this->chart1->TabIndex = 21;
            this->chart1->Text = L"chart1";
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(589, 416);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(774, 313);
            this->dataGridView1->TabIndex = 20;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(6, 29);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(577, 223);
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
            this->label14->Text = L"Описание задачи";
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->chart2);
            this->tabPage2->Controls->Add(this->groupBox4);
            this->tabPage2->Controls->Add(this->groupBox6);
            this->tabPage2->Controls->Add(this->dataGridView2);
            this->tabPage2->Controls->Add(this->pictureBox1);
            this->tabPage2->Controls->Add(this->button1);
            this->tabPage2->Controls->Add(this->groupBox3);
            this->tabPage2->Controls->Add(this->label15);
            this->tabPage2->Location = System::Drawing::Point(4, 25);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(1369, 735);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Основная задача";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // chart2
            // 
            chartArea2->Area3DStyle->Enable3D = true;
            chartArea2->Area3DStyle->IsRightAngleAxes = false;
            chartArea2->Name = L"ChartArea1";
            this->chart2->ChartAreas->Add(chartArea2);
            this->chart2->Location = System::Drawing::Point(617, 6);
            this->chart2->Name = L"chart2";
            this->chart2->Size = System::Drawing::Size(746, 393);
            this->chart2->TabIndex = 26;
            this->chart2->Text = L"chart2";
            // 
            // groupBox4
            // 
            this->groupBox4->Controls->Add(this->label20);
            this->groupBox4->Controls->Add(this->label21);
            this->groupBox4->Controls->Add(this->label22);
            this->groupBox4->Controls->Add(this->label23);
            this->groupBox4->Controls->Add(this->label24);
            this->groupBox4->Controls->Add(this->label25);
            this->groupBox4->Controls->Add(this->label26);
            this->groupBox4->Controls->Add(this->label27);
            this->groupBox4->Location = System::Drawing::Point(12, 472);
            this->groupBox4->Name = L"groupBox4";
            this->groupBox4->Size = System::Drawing::Size(583, 216);
            this->groupBox4->TabIndex = 25;
            this->groupBox4->TabStop = false;
            this->groupBox4->Text = L"Справка";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Location = System::Drawing::Point(360, 190);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(90, 17);
            this->label20->TabIndex = 7;
            this->label20->Text = L"В узле (x, y):";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Location = System::Drawing::Point(7, 190);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(249, 17);
            this->label21->TabIndex = 6;
            this->label21->Text = L"Макс. разность двух решений |V2-V|:";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Location = System::Drawing::Point(6, 163);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(281, 17);
            this->label22->TabIndex = 5;
            this->label22->Text = L"Схема на сетке решена с невязкой Rs_2:";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Location = System::Drawing::Point(6, 135);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(291, 17);
            this->label23->TabIndex = 4;
            this->label23->Text = L"Невязка СЛАУ на нач. приближении R0_2:";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Location = System::Drawing::Point(7, 107);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(212, 17);
            this->label24->TabIndex = 3;
            this->label24->Text = L"Достигнутая точность метода:";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Location = System::Drawing::Point(7, 77);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(124, 17);
            this->label25->TabIndex = 2;
            this->label25->Text = L"Кол-во итераций:";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Location = System::Drawing::Point(6, 50);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(130, 17);
            this->label26->TabIndex = 1;
            this->label26->Text = L"Параметр метода:";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Location = System::Drawing::Point(7, 22);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(54, 17);
            this->label27->TabIndex = 0;
            this->label27->Text = L"Метод:";
            // 
            // groupBox6
            // 
            this->groupBox6->Controls->Add(this->radioButtonV2V_main);
            this->groupBox6->Controls->Add(this->radioButtonV2_main);
            this->groupBox6->Controls->Add(this->radioButtonV_main);
            this->groupBox6->Location = System::Drawing::Point(12, 391);
            this->groupBox6->Name = L"groupBox6";
            this->groupBox6->Size = System::Drawing::Size(583, 75);
            this->groupBox6->TabIndex = 24;
            this->groupBox6->TabStop = false;
            this->groupBox6->Text = L"Показать в таблице";
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
            this->dataGridView2->Location = System::Drawing::Point(617, 403);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->RowTemplate->Height = 24;
            this->dataGridView2->Size = System::Drawing::Size(749, 336);
            this->dataGridView2->TabIndex = 19;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(16, 40);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(293, 173);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 18;
            this->pictureBox1->TabStop = false;
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->button1->Location = System::Drawing::Point(16, 337);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(338, 48);
            this->button1->TabIndex = 15;
            this->button1->Text = L"Вычислить";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
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
            this->groupBox3->Location = System::Drawing::Point(16, 219);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(579, 112);
            this->groupBox3->TabIndex = 14;
            this->groupBox3->TabStop = false;
            this->groupBox3->Text = L"Параметры метода";
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
            this->label29->Size = System::Drawing::Size(310, 17);
            this->label29->TabIndex = 24;
            this->label29->Text = L"Параметр метода  w (в интервале от 0 до 2)):";
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
            this->label16->Text = L"Макс. кол-во итераций:";
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
            this->label17->Text = L"Точность метода:";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Location = System::Drawing::Point(7, 50);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(159, 17);
            this->label18->TabIndex = 3;
            this->label18->Text = L"Число разбиений по y:";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(7, 25);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(158, 17);
            this->label19->TabIndex = 2;
            this->label19->Text = L"Число разбиений по x:";
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
            this->label15->Text = L"Описание задачи";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1386, 766);
            this->Controls->Add(this->tabControl1);
            this->Controls->Add(this->label5);
            this->Name = L"MyForm";
            this->Text = L"ЛР 1. Вариант 5. Решение задачи Дирихле для уравнения Пуассона. Команда Цодикова."
                L"";
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            this->groupBox5->ResumeLayout(false);
            this->groupBox5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
            this->groupBox4->ResumeLayout(false);
            this->groupBox4->PerformLayout();
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

    private: int Nmax;
             double eps;
             int n, m;
             double w; // parameter from 0 to 2
             const double PI = 3.141592653589793;
             const double a = 0.0;
             const double b = 2.0;
             const double c = 0.0;
             const double d = 1.0;

    private: double u(double i, double j, int _n, int _m) {
        const double h = (b - a) / _n;
        const double k = (d - c) / _m;
        double x = a + i * h;
        double y = c + j * k;
        return std::exp(std::sin(PI * x * y) * std::sin(PI * x * y));
    }

    private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
        w = Convert::ToDouble(textBox9->Text);
        n = Convert::ToInt32(textBox1->Text);
        m = Convert::ToInt32(textBox2->Text);
        eps = Convert::ToDouble(textBox3->Text);
        Nmax = Convert::ToInt32(textBox4->Text);

        int n_2 = 2 * n;
        int m_2 = 2 * m;

        int s = 0;
        double eps_max = 0.0;
        double eps_cur = 0.0;
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

        double v_old, v_old2;
        double v_new, v_new2;
        double R_N_2 = 0.0;
        double R_0_2 = 0.0;
        bool flag = false;

        h2 = -(1 / (h * h));
        k2 = -(1 / (k * k));
        a2 = -2 * (h2 + k2);

        h2_2 = -(1 / (h_2 * h_2));
        k2_2 = -(1 / (k_2 * k_2));
        a2_2 = -2 * (h2_2 + k2_2);


        for (int j = 0; j <= m; j++) {
            double y = c + j * k;
            v[0][j] = 1.0;
            v[n][j] = std::exp(std::pow(std::sin(2 * PI * y), 2));
        }

        for (int i = 0; i <= n; i++) {
            double x = a + i * h;
            v[i][0] = 1.0;
            v[i][m] = std::exp(std::pow(std::sin(PI * x), 2));
        }

        for (int j = 0; j <= m; j++)
            for (int i = 0; i <= n; i++) {
                double x = a + i * h;
                double y = c + j * k;
                f[i][j] = PI * PI * std::exp(std::pow(std::sin(PI * x * y), 2)) * (-4 * std::cos(2 * PI * x * y) + cos(4 * PI * x * y) - 1) * (x * x + y * y) * 0.5;
            }

        for (int j = 0; j <= m_2; j++) {
            double y = c + j * k_2;
            v2[0][j] = 1.0;
            v2[n_2][j] = std::exp(std::pow(std::sin(2 * PI * y), 2));
        }

        for (int i = 0; i <= n_2; i++) {
            double x = a + i * h_2;
            v2[i][0] = 1.0;
            v2[i][m_2] = std::exp(std::pow(std::sin(PI * x), 2));
        }

        for (int j = 0; j <= m_2; j++)
            for (int i = 0; i <= n_2; i++) {
                double x = a + i * h_2;
                double y = c + j * k_2;
                f2[i][j] = PI * PI * std::exp(std::pow(std::sin(PI * x * y), 2)) * (-4 * std::cos(2 * PI * x * y) + cos(4 * PI * x * y) - 1) * (x * x + y * y) * 0.5;
            }


        for (int j = 1; j < m; j++)
            for (int i = 1; i < n; i++) {
                R[i][j] = a2 * v[i][j] + (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])) - f[i][j];
            }

        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++) {
                R_0_2 += R[i][j] * R[i][j];
            }
        R_0_2 = std::sqrt(R_0_2);

        while (!flag) {
            eps_max = 0.0;

            // (2n, 2m)
            for (int j = 1; j < m_2; j++)
                for (int i = 1; i < n_2; i++) {
                    v_old2 = v2[i][j];
                    v_new2 = -w * (h2_2 * (v2[i + 1][j] + v2[i - 1][j]) + k2_2 * (v2[i][j + 1] + v2[i][j - 1]));
                    v_new2 = v_new2 + (1 - w) * a2_2 * v2[i][j] + w * f2[i][j];
                    v_new2 = v_new2 / a2_2;
                    v2[i][j] = v_new2;
                }

            // (n, m)
            for (int j = 1; j < m; j++) {
                for (int i = 1; i < n; i++) {
                    v_old = v[i][j];
                    v_new = -w * (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
                    v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];
                    v_new = v_new / a2;
                    R[i][j] = a2 * v[i][j] + (h2*(v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])) - f[i][j];
                    eps_cur = std::abs(u(i, j, n, m) - v_new);
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

        this->label6->Text = "Метод:    метод верхней релаксации";
        this->label7->Text = ("Параметр метода:" + "   " + Convert::ToString(w));
        this->label8->Text = ("Количество итераций:" + "   " + Convert::ToString(s));
        this->label9->Text = ("Достигнутая погрешность метода:" + "   " + Convert::ToString(eps_max));
        this->label10->Text = ("Невязка СЛАУ на нач. приближении R0_2:" + "   " + Convert::ToString(round(R_0_2 * 1e8) / 1e8));
        this->label11->Text = ("Схема на сетке решена с невязкой Rs_2:" + "   " + Convert::ToString(R_N_2));

       
        //while (!flag) {
        //    eps_max2 = 0.0;
        //    for (int j = 1; j < m_2; j++)
        //        for (int i = 1; i < n_2; i++) {
        //            v_old2 = v2[i][j];
        //            v_new2 = -w * (h2 * (v2[i + 1][j] + v2[i - 1][j]) + k2 * (v2[i][j + 1] + v2[i][j - 1]));
        //            v_new2 = v_new2 + (1 - w) * a2 * v2[i][j] + w * f2[i][j];
        //            v_new2 = v_new2 / a2;
        //            eps_cur2 = std::abs(u(i, j, n_2, m_2) - v_new2); // v_old -> u(i, j)
        //            if (eps_cur2 > eps_max2) {
        //                eps_max2 = eps_cur2;
        //            }
        //            v2[i][j] = v_new2;
        //        }
        //    s++;
        //    if ((eps_max2 <= eps) || (s >= Nmax)) {
        //        flag = true;
        //    }
        //}

        for (int j = 0; j <= m; j++)
            for (int i = 0; i <= n; i++) {
                if (std::abs(v2[2 * i][2 * j] - v[i][j]) > v2v_max) {
                    v2v_max = std::abs(v2[2 * i][2 * j] - v[i][j]);
                    x_max = a + i * h;
                    y_max = c + j * k;
                }
            }

        this->label12->Text = ("Макс. разность двух решений |V2-V|:" + "   " + Convert::ToString(round(v2v_max * 1e8) / 1e8));
        this->label13->Text = ("В узле (x, y):" + "   (" + Convert::ToString(round(x_max * 1e8) / 1e8) + ", " + Convert::ToString(round(y_max * 1e8) / 1e8) + ")");

        if (this->radioButtonV->Checked) {
            dataGridView1->Rows->Clear();
            dataGridView1->Columns->Clear();
            this->dataGridView1->Columns->Add("", "i / j");
            for (int i = 0; i <= n; i++) {
                this->dataGridView1->Rows->Add(Convert::ToString(i));
            }

            for (int j = 0; j <= m; j++) {
                this->dataGridView1->Columns->Add("", Convert::ToString(j));
            }

            for (int i = 0; i <= n; i++)
                for (int j = 0; j <= m; j++)
                    this->dataGridView1->Rows[i]->Cells[j + 1]->Value = round(v[i][j] * 1e8) / 1e8;
        }

        if (this->radioButtonV2->Checked) {
            dataGridView1->Rows->Clear();
            dataGridView1->Columns->Clear();
            this->dataGridView1->Columns->Add("", "i / j");
            for (int i = 0; i <= n_2; i++) {
                this->dataGridView1->Rows->Add(Convert::ToString(i));
            }

            for (int j = 0; j <= m_2; j++) {
                this->dataGridView1->Columns->Add("", Convert::ToString(j));
            }

            for (int i = 0; i <= n_2; i++)
                for (int j = 0; j <= m_2; j++)
                    this->dataGridView1->Rows[i]->Cells[j + 1]->Value = round(v2[i][j] * 1e8) / 1e8;
        }

        if (this->radioButtonV2V->Checked) {
            dataGridView1->Rows->Clear();
            dataGridView1->Columns->Clear();
            this->dataGridView1->Columns->Add("", "i / j");
            for (int i = 0; i <= n; i++) {
                this->dataGridView1->Rows->Add(Convert::ToString(i));
            }

            for (int j = 0; j <= m; j++) {
                this->dataGridView1->Columns->Add("", Convert::ToString(j));
            }

            for (int i = 0; i <= n; i++)
                for (int j = 0; j <= m; j++)
                    this->dataGridView1->Rows[i]->Cells[j + 1]->Value = round(std::abs(v2[2 * i][2 * j] - v[i][j]) * 1e8) / 1e8;
        }
        

        std::vector<double> x_v;
        std::vector<double> y_v;

        this->chart1->Series->Clear();

        for (int i = 0; i <= n; i++) {
            double x = a + i * h;
            x_v.push_back(x);
        }

        for (int j = 0; j <= m; j++) {
            double y = c + j * k;
            y_v.push_back(y);
        }


        for (int i = 0; i <= n; i++) {
            Series^ Series1 = gcnew Series();
            Series1->ChartType = SeriesChartType::Spline;
            Series1->Color = Color::Orange;
            //Series1->
            chart1->Series->Add(Series1);
            for (int j = 0; j <= m; j++) {
                double x = a + i * h;
                double y = c + j * k;
                /*cli::array<Point3D^>^ p = gcnew cli::array<Point3D^>(2);
                p[0] = gcnew Point3D(x, y, u(i, j));
                p[1] = gcnew Point3D(x, y, v[i][j]);
                this->chart1->ChartAreas[0]->TransformPoints(p);*/
                /*this->chart1->Series[0]->Points->AddXY(p[0]->X, p[0]->Y);
                this->chart1->Series[1]->Points->AddXY(p[1]->X, p[1]->Y);*/
                this->chart1->Series[i]->Points->AddXY((double)y_v[j], u(i,j, n, m));

                /*this->chart1->Series[i]->Points->AddXY(x_v[i], get_u(x_v[i], y_v[j]));
                this->chart1->Series[i]->Points->AddXY(x_v[i], v[i][j]);*/
            }
        }

        for (int i = 0; i <= n; i++) {
            Series^ Series1 = gcnew Series();
            Series1->ChartType = SeriesChartType::Spline;
            Series1->Color = Color::Blue;
            chart1->Series->Add(Series1);
            for (int j = 0; j <= m; j++) {
                double x = a + i * h;
                double y = c + j * k;
                /*cli::array<Point3D^>^ p = gcnew cli::array<Point3D^>(2);
                p[0] = gcnew Point3D(x, y, u(i, j));
                p[1] = gcnew Point3D(x, y, v[i][j]);
                this->chart1->ChartAreas[0]->TransformPoints(p);*/
                /*this->chart1->Series[0]->Points->AddXY(p[0]->X, p[0]->Y);
                this->chart1->Series[1]->Points->AddXY(p[1]->X, p[1]->Y);*/
                this->chart1->Series[i + n + 1]->Points->AddXY((double)y_v[j], v[i][j]);
            }
        }
    }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
    w = Convert::ToDouble(textBox10->Text);
    n = Convert::ToInt32(textBox8->Text);
    m = Convert::ToInt32(textBox7->Text);
    eps = Convert::ToDouble(textBox6->Text);
    Nmax = Convert::ToInt32(textBox5->Text);

    int n_2 = 2 * n;
    int m_2 = 2 * m;

    int s = 0;
    double eps_max = 0.0;
    double eps_cur = 0.0;
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

    double v_old, v_old2;
    double v_new, v_new2;
    double R_N_2 = 0.0;
    double R_0_2 = 0.0;
    bool flag = false;

    h2 = -(1 / (h * h));
    k2 = -(1 / (k * k));
    a2 = -2 * (h2 + k2);

    h2_2 = -(1 / (h_2 * h_2));
    k2_2 = -(1 / (k_2 * k_2));
    a2_2 = -2 * (h2_2 + k2_2);


    for (int j = 0; j <= m; j++) {
        double y = c + j * k;
        v[0][j] = -y * (y - 1);
        v[n][j] = y * (1 - y);
    }

    for (int i = 0; i <= n; i++) {
        double x = a + i * h;
        v[i][0] = std::abs(std::sin(PI * x));
        v[i][m] = std::abs(std::sin(PI * x)) * std::exp(x);
    }

    for (int j = 0; j <= m; j++)
        for (int i = 0; i <= n; i++) {
            double x = a + i * h;
            double y = c + j * k;
            f[i][j] = -std::abs(x - y);
        }

    for (int j = 0; j <= m_2; j++) {
        double y = c + j * k_2;
        v2[0][j] = -y * (y - 1);
        v2[n_2][j] = y * (1 - y);
    }

    for (int i = 0; i <= n_2; i++) {
        double x = a + i * h_2;
        v2[i][0] = std::abs(std::sin(PI * x));
        v2[i][m_2] = std::abs(std::sin(PI * x)) * std::exp(x);
    }

    for (int j = 0; j <= m_2; j++)
        for (int i = 0; i <= n_2; i++) {
            double x = a + i * h_2;
            double y = c + j * k_2;
            f2[i][j] = -std::abs(x - y);
        }


    for (int j = 1; j < m; j++)
        for (int i = 1; i < n; i++) {
            R[i][j] = a2 * v[i][j] + (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])) - f[i][j];
        }

    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < m + 1; j++) {
            R_0_2 += R[i][j] * R[i][j];
        }
    R_0_2 = std::sqrt(R_0_2);

    while (!flag) {
        eps_max = 0.0;

        // (2n, 2m)
        for (int j = 1; j < m_2; j++)
            for (int i = 1; i < n_2; i++) {
                v_old2 = v2[i][j];
                v_new2 = -w * (h2_2 * (v2[i + 1][j] + v2[i - 1][j]) + k2_2 * (v2[i][j + 1] + v2[i][j - 1]));
                v_new2 = v_new2 + (1 - w) * a2_2 * v2[i][j] + w * f2[i][j];
                v_new2 = v_new2 / a2_2;
                v2[i][j] = v_new2;
            }

        // (n, m)
        for (int j = 1; j < m; j++) {
            for (int i = 1; i < n; i++) {
                v_old = v[i][j];
                v_new = -w * (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
                v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];
                v_new = v_new / a2;
                R[i][j] = a2 * v[i][j] + (h2*(v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])) - f[i][j];
                eps_cur = std::abs(v2[2 * i][2 * j] - v_new);
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

    this->label27->Text = "Метод:    метод верхней релаксации";
    this->label26->Text = ("Параметр метода:" + "   " + Convert::ToString(w));
    this->label25->Text = ("Количество итераций:" + "   " + Convert::ToString(s));
    this->label24->Text = ("Достигнутая точность метода:" + "   " + Convert::ToString(eps_max));
    this->label23->Text = ("Невязка СЛАУ на нач. приближении R0_2:" + "   " + Convert::ToString(round(R_0_2 * 1e8) / 1e8));
    this->label22->Text = ("Схема на сетке решена с невязкой Rs_2:" + "   " + Convert::ToString(R_N_2));

    for (int j = 0; j <= m; j++)
        for (int i = 0; i <= n; i++) {
            if (std::abs(v2[2 * i][2 * j] - v[i][j]) > v2v_max) {
                v2v_max = std::abs(v2[2 * i][2 * j] - v[i][j]);
                x_max = a + i * h;
                y_max = c + j * k;
            }
        }

    this->label21->Text = ("Макс. разность двух решений |V2-V|:" + "   " + Convert::ToString(round(v2v_max * 1e8) / 1e8));
    this->label20->Text = ("В узле (x, y):" + "   (" + Convert::ToString(round(x_max * 1e8) / 1e8) + ", " + Convert::ToString(round(y_max * 1e8) / 1e8) + ")");

    if (this->radioButtonV_main->Checked) {
        dataGridView2->Rows->Clear();
        dataGridView2->Columns->Clear();
        this->dataGridView2->Columns->Add("", "i / j");
        for (int i = 0; i <= n; i++) {
            this->dataGridView2->Rows->Add(Convert::ToString(i));
        }

        for (int j = 0; j <= m; j++) {
            this->dataGridView2->Columns->Add("", Convert::ToString(j));
        }

        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
                this->dataGridView2->Rows[i]->Cells[j + 1]->Value = round(v[i][j] * 1e8) / 1e8;
    }

    if (this->radioButtonV2_main->Checked) {
        dataGridView2->Rows->Clear();
        dataGridView2->Columns->Clear();
        this->dataGridView2->Columns->Add("", "i / j");
        for (int i = 0; i <= n_2; i++) {
            this->dataGridView2->Rows->Add(Convert::ToString(i));
        }

        for (int j = 0; j <= m_2; j++) {
            this->dataGridView2->Columns->Add("", Convert::ToString(j));
        }

        for (int i = 0; i <= n_2; i++)
            for (int j = 0; j <= m_2; j++)
                this->dataGridView2->Rows[i]->Cells[j + 1]->Value = round(v2[i][j] * 1e8) / 1e8;
    }

    if (this->radioButtonV2V_main->Checked) {
        dataGridView2->Rows->Clear();
        dataGridView2->Columns->Clear();
        this->dataGridView2->Columns->Add("", "i / j");
        for (int i = 0; i <= n; i++) {
            this->dataGridView2->Rows->Add(Convert::ToString(i));
        }

        for (int j = 0; j <= m; j++) {
            this->dataGridView2->Columns->Add("", Convert::ToString(j));
        }

        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
                this->dataGridView2->Rows[i]->Cells[j + 1]->Value = round(std::abs(v2[2 * i][2 * j] - v[i][j]) * 1e8) / 1e8;
    }


    std::vector<double> x_v;
    std::vector<double> y_v;

    this->chart2->Series->Clear();

    for (int i = 0; i <= n; i++) {
        double x = a + i * h;
        x_v.push_back(x);
    }

    for (int j = 0; j <= m; j++) {
        double y = c + j * k;
        y_v.push_back(y);
    }


    for (int i = 0; i <= n; i++) {
        Series^ Series1 = gcnew Series();
        Series1->ChartType = SeriesChartType::Spline;
        Series1->Color = Color::Orange;
        chart2->Series->Add(Series1);
        for (int j = 0; j <= m; j++) {
            double x = a + i * h;
            double y = c + j * k;
            this->chart2->Series[i]->Points->AddXY((double)y_v[j], u(i, j, n, m));
        }
    }

    for (int i = 0; i <= n; i++) {
        Series^ Series1 = gcnew Series();
        Series1->ChartType = SeriesChartType::Spline;
        Series1->Color = Color::Blue;
        chart2->Series->Add(Series1);
        for (int j = 0; j <= m; j++) {
            double x = a + i * h;
            double y = c + j * k;
            this->chart2->Series[i + n + 1]->Points->AddXY((double)y_v[j], v[i][j]);
        }
    }
}
};
    }
