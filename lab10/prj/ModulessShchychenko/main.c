







double s_calculation(double x, double y, double z)
{
    double pi = 3.14;
    double S = (0.5*pow((abs(2*z-pow(x,2)))/sin(x),3))/sqrt(1 + abs(cos(x)))+2*pi;
    return S;
}
std::string task10_1(const string& filename)

{
    setlocale(LC_ALL,"ukr");
    ofstream file(filename, ios::app);
    if(file.is_open())
    {
        file <<"Щиченко Олексій Андрійович КН-22" << endl
        << " ЦНТУ " << endl
        << " 2023 " << endl << endl;
        cout << "Запис файла завершено" << endl;
        file.close();
    }
    else
    {
        cout << "Увага!Помилка!Файл не знайдено!"
    }
}
int task10_1_2(const string& filename)
{
    std::vector<std::string> ukr_sentences;
std::vector<std::string> eng_sentences;

std::ifstream input_file("input.txt");
std::string line;
while (std::getline(input_file, line))
{

    if (line.find("ukr:") == 0)
    {
        std::string ukr_sentence = line.substr(4);
        ukr_sentences.push_back(ukr_sentence);
    }

    else if (line.find("eng:") == 0)
    {
        std::string eng_sentence = line.substr(4);
        eng_sentences.push_back(eng_sentence);
    }
}

input_file.close();
    }

    input_file.close();

    return 0;


}
int task10_1_3
{
    setlocale(LC_ALL,"ukr");

    std::string filename = "input.txt";
    std::ifstream input_file(filename);

    if (!input_file.is_open())
    {
        std::cerr << "Помилка відкриття файлу " << filename << std::endl;
        return 1;
    }

    std::regex sentence_regex(R"(^[A-Z][a-z]+(\s[A-Z][a-z]+)*[.?!]$)");

    std::string line;
    while (std::getline(input_file, line))
    {
        if (std::regex_match(line, sentence_regex))
        {
            if (line.find("лінощі") == std::string::npos
                && line.find("сесія") == std::string::npos
                && line.find("академічназаборгованість") == std::string::npos)
            {
                std::cout << "Знайдено англійське речення: " << line << std::endl;
            }
        }
    }

    input_file.close();

    return 0;
}
void task10_2(const string& filename)
{
    setlocale(LC_ALL,"ukr");
    ofstream file("input.txt", ios::app);

    time_t now = time(0);
    char* dt = ctime(&now);

    file << "Оновлено: " << dt << endl;

    file.close();
    ofstream file("input.txt", ios::app);


    file << "Особи, які навчаються у закладах вищої освіти за денною формою навчання за рахунок коштів державного або місцевих бюджетів, мають право на отримання академічних та соціальних стипендій у встановленому законодавством порядку." << endl;


    file.close();



    return 0;
}
double task10_3(double x, double y, double z)
{
    setlocale(LC_ALL,"ukr");
    ofstream outfile("output.txt", ios_base::app);
    double result = calsulation(x, y, z);
    outfile << "S = " << result << endl;
    outfile << "b у двійковій системі числення: " << bitset<32>(b) << endl;
    outdile.close();

}



