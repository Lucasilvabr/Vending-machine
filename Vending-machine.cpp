/*
 NOME     : LUCAS DA SILVA
 SEMESTRE : 1° NOTURNO
 RA       : 2840482123026

 NOME     : LEONARDO MARTINS DE SOUSA
 SEMESTRE : 1° NOTURNO
 RA       : 2840482123009
*/

#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;



int main() {
    int modo, opcao, snacks, bebidas, salgadinhos;
    float troco,usuario;
    float KitKat, Suflair, Coca, Fanta, Sprite, Laranja, Uva, Agua, Doritos, Cheetos, Cebolitos;
    float Kit_valor = 0, Suf_valor = 0, Coca_valor = 0, Fanta_valor = 0, Spr_valor = 0, Agua_valor = 0, Lar_valor = 0, Uva_valor = 0;
    float Dori_valor = 0, Chee_valor = 0, Ceb_valor = 0;
    int quant_kit = 0, quant_Suf = 0, quant_Coca = 0, quant_Fanta = 0, quant_Spr = 0, quant_Lar = 0, quant_Uva = 0, quant_Agua = 0;
    int quant_Dori = 0, quant_Chee = 0, quant_Ceb = 0, opcaoSelecionada = 0;
    float v_total = 0, vkit_final = 0, vAgua_final = 0, vSuf_final = 0, vCoca_final = 0, vFan_final = 0, vSpr_final = 0, vLar_final = 0, vUva_final = 0;
    float vDori_final = 0, vChee_final = 0, vCeb_final = 0;
    float vkit_finalTemp = 0, vAgua_finalTemp = 0, vSuf_finalTemp = 0, vCoca_finalTemp = 0, vFan_finalTemp = 0, vSpr_finalTemp = 0, vLar_finalTemp = 0, vUva_finalTemp = 0;
    float vDori_finalTemp = 0, vChee_finalTemp = 0, vCeb_finalTemp = 0,v_totalfinal=0;
    int estoque_kit = 10, estoque_Suf = 10, estoque_Coca = 10, estoque_Fanta = 10, estoque_Spr = 10, estoque_Lar = 10, estoque_Uva = 10, estoque_Agua = 10;
    int estoque_Dori = 10, estoque_Chee = 10, estoque_Ceb = 10;
    char op = 's', op1 = 's';

    KitKat = 3;
    Suflair = 3;
    Coca = 4;
    Sprite = 3.50;
    Fanta = 3.50;
    Laranja = 3.50;
    Uva = 3.50;
    Agua = 2;
    Doritos = 2.50;
    Cheetos = 2.50;
    Cebolitos = 2.50;

    /*      Ola, para melhor compreensao deixamos esse lembrete: 
        Nosso programa ja se inicia com quantidade 10 para cada produto.
    */

    while (op1 == 's' || op1 == 'S') {
        cout << "\n\t               Seja bem-vindo !!! " << endl;
        cout << "\n\t    Por favor,Insira em qual modo ira usar: " << endl;
        cout << "\n\t              1 - Usuario " << endl;
        cout << "\t              2 - Administrador " << endl;
        cout << "\n\tOpcao:";
        cin >> modo;
        op = 's';

        switch (modo) {
        
            case 1:
                while (op == 's' || op == 'S') {
                    
                    cout << "\n\tBem vindo Usuario! ";
                    cout << endl;
                    cout << "\n\tInsira a sessao desejada : ";
                    cout << "\n\t1- Snacks:" << endl;
                    cout << "\tKitKat R$3,00" << endl;
                    cout << "\tSuflair R$3,00" << endl;
                    cout << "\n\t2- Bebidas" << endl;
                    cout << "\tCoca-Cola(350 ml) R$4,00" << endl;
                    cout << "\tFanta(350 ml) R$3,50" << endl;
                    cout << "\tSprite(350 ml) R$3,50" << endl;
                    cout << "\tSuco Laranja(350 ml) R$3,50" << endl;
                    cout << "\tSuco Uva(350 ml) R$3,50" << endl;
                    cout << "\tAgua(500 ml) R$2,00" << endl;
                    cout << "\n\t3- Salgadinhos" << endl;
                    cout << "\tDoritos R$2,50" << endl;
                    cout << "\tCheetos R$2,50" << endl;
                    cout << "\tCebolitos R$2,50" << endl;
                    cout <<"\n\tOpcao :";
                    cin >> opcao;

                    if (opcao == 1) {
                        cout << "\n\tQual item deseja pedir : " << endl;
                        cout << "\n\t1 - KitKat R$3,00" << endl;
                        cout << "\t2- Suflair R$3,00" << endl;
                        cout <<"\n\tOpcao: ";
                        cin >> snacks;

                        if (snacks == 1) {
                            if(estoque_kit <= 0) {
                                cout << "\n\tDesculpe estamos sem estoque desse item, aguarde reposição." << endl;

                            } else {
                                bool quantValido = false;

                                while (quantValido == false) {
                                    cout << "\n\tQual quantidade desejada: ";
                                    cin >> quant_kit;

                                    if (quant_kit > estoque_kit) {
                                        cout << "\n\tDesculpe, quantidade inserida acima do disponivel em estoque("<< estoque_kit <<") , tente novamente. "<<endl;
                                    } else {
                                        quantValido = true;
                                    }
                                }
                                Kit_valor += KitKat;
                                vkit_final = Kit_valor * quant_kit;
                                vkit_finalTemp = Kit_valor * quant_kit;
                                estoque_kit -= quant_kit;

                                cout << "\tQuantidade :" << quant_kit << endl;
                                cout << "\tValor R$ " << vkit_final <<" reais"<< endl;
                            }
                        }

                        if (snacks == 2) {
                            if(estoque_Suf <= 0) {
                                cout << "\n\tDesculpe estamos sem estoque desse item, aguarde reposição." << endl;

                            } else {
                                bool quantValido = false;

                                while (quantValido == false) {
                                    cout << "\n\tQual quantidade desejada: ";
                                    cin >> quant_Suf;

                                    if (quant_Suf > estoque_Suf) {
                                        cout << "\n\tDesculpe, quantidade inserida acima do disponivel em estoque("<< estoque_Suf <<") , tente novamente. "<<endl;
                                    } else {
                                        quantValido = true;
                                    }
                                }
                                Suf_valor += Suflair;
                                vSuf_final = Suf_valor * quant_Suf;
                                vSuf_finalTemp = Suf_valor * quant_Suf;
                                estoque_Suf -= quant_Suf;
    
                                    cout << "\tQuantidade :" << quant_Suf << endl;
                                cout << "\tValor R$ " << vSuf_final <<" reais"<< endl;
                            }
                        }
                    
                    }
                    if (opcao == 2) {
                        cout << "\n\tQual item deseja pedir : " << endl;
                        cout << "\n\t1- Coca-Cola(350 ml) R$4,00" << endl;
                        cout << "\t2- Fanta(350 ml) R$3,50" << endl;
                        cout << "\t3- Sprite(350 ml) R$3,50" << endl;
                        cout << "\t4- Suco Laranja(350 ml) R$3,50" << endl;
                        cout << "\t5- Suco Uva(350 ml) R$3,50" << endl;
                        cout << "\t6- Agua(500 ml) R$2,00" << endl;
                        cout <<"\n\tOpcao: ";
                        cin >> bebidas;

                        if (bebidas == 1) {
                            if(estoque_Coca <= 0) {
                                cout << "\n\tDesculpe estamos sem estoque desse item, aguarde reposição." << endl;

                            } else {
                                bool quantValido = false;

                                while (quantValido == false) {
                                    cout << "\n\tQual quantidade desejada: ";
                                    cin >> quant_Coca;

                                    if (quant_Coca > estoque_Coca) {
                                        cout << "\n\tDesculpe, quantidade inserida acima do disponivel em estoque("<< estoque_Coca <<") , tente novamente. "<<endl;
                                    } else {
                                        quantValido = true;
                                    }
                                }
                                Coca_valor += Coca;
                                vCoca_final = Coca_valor * quant_Coca;
                                vCoca_finalTemp = Coca_valor * quant_Coca;
                                estoque_Coca -= quant_Coca;

                                cout << "\tQuantidade :" << quant_Coca << endl;
                                cout << "\tValor R$ " << vCoca_finalTemp <<" reais"<< endl;  
                            }
                        }

                        if (bebidas == 2) {
                            if(estoque_Fanta <= 0) {
                                cout << "\n\tDesculpe estamos sem estoque desse item, aguarde reposição." << endl;

                            } else {

                                bool quantValido = false;

                                while (quantValido == false) {
                                    cout << "\n\tQual quantidade desejada: ";
                                    cin >> quant_Fanta;

                                    if (quant_Fanta > estoque_Fanta) {
                                        cout << "\n\tDesculpe, quantidade inserida acima do disponivel em estoque("<< estoque_Fanta <<") , tente novamente. "<<endl;
                                    } else {
                                        quantValido = true;
                                    }
                                }
                                Fanta_valor += Fanta;
                                vFan_final = Fanta_valor * quant_Fanta;
                                vFan_finalTemp = Fanta_valor * quant_Fanta;
                                estoque_Fanta -= quant_Fanta;
    
                                cout << "\tQuantidade :" << quant_Fanta << endl;
                                cout << "\tValor R$ " << vFan_finalTemp <<" reais"<< endl;
                            }
                        }

                        if (bebidas == 3) {
                            if(estoque_Spr <= 0) {
                                cout << "\n\tDesculpe estamos sem estoque desse item, aguarde reposição." << endl;

                            } else {

                                bool quantValido = false;

                                while (quantValido == false) {
                                    cout << "\n\tQual quantidade desejada: ";
                                    cin >> quant_Spr;

                                    if (quant_Spr > estoque_Spr) {
                                        cout << "\n\tDesculpe, quantidade inserida acima do disponivel em estoque("<< estoque_Spr <<") , tente novamente. "<<endl;
                                    } else {
                                        quantValido = true;
                                    }
                                }
                                Spr_valor += Sprite;
                                vSpr_final = Spr_valor * quant_Spr;
                                vSpr_finalTemp = Spr_valor * quant_Spr;
                                estoque_Spr -= quant_Spr;
    
                                cout << "\tQuantidade :" << quant_Spr << endl;
                                cout << "\tValor R$ " << vSpr_finalTemp <<" reais"<< endl;
                            }
                        }

                        if (bebidas == 4) {
                            if(estoque_Lar <= 0) {
                                cout << "\n\tDesculpe estamos sem estoque desse item, aguarde reposição." << endl;

                            } else {

                                bool quantValido = false;

                                while (quantValido == false) {
                                    cout << "\n\tQual quantidade desejada: ";
                                    cin >> quant_Lar;

                                    if (quant_Lar > estoque_Lar) {
                                        cout << "\n\tDesculpe, quantidade inserida acima do disponivel em estoque("<< estoque_Lar <<") , tente novamente. "<<endl;
                                    } else {
                                        quantValido = true;
                                    }
                                }
                                Lar_valor += Laranja;
                                vLar_final = Lar_valor * quant_Lar;
                                vLar_finalTemp = Lar_valor * quant_Lar;
                                estoque_Lar -= quant_Lar;
    
                                cout << "\tQuantidade :" << quant_Lar << endl;
                                cout << "\tValor R$ " << vLar_finalTemp <<" reais"<< endl;
                            }
                        }

                        if (bebidas == 5) {
                            if(estoque_Uva <= 0) {
                                cout << "\n\tDesculpe estamos sem estoque desse item, aguarde reposição." << endl;

                            } else {

                                bool quantValido = false;

                                while (quantValido == false) {
                                    cout << "\n\tQual quantidade desejada: ";
                                    cin >> quant_Uva;

                                    if (quant_Uva > estoque_Uva) {
                                        cout << "\n\tDesculpe, quantidade inserida acima do disponivel em estoque("<< estoque_Uva <<") , tente novamente. "<<endl;
                                    } else {
                                        quantValido = true;
                                    }
                                }
                                Uva_valor += Uva;
                                vUva_final = Uva_valor * quant_Uva;
                                vUva_finalTemp = Uva_valor * quant_Uva;
                                estoque_Uva -= quant_Uva;
    
                                cout << "\tQuantidade :" << quant_Uva << endl;
                                cout << "\tValor R$ " << vUva_finalTemp <<" reais"<< endl;
                            }
                        }

                        if (bebidas == 6) {
                            if(estoque_Agua <= 0) {
                                cout << "\n\tDesculpe estamos sem estoque desse item, aguarde reposição." << endl;

                            } else {

                                bool quantValido = false;

                                while (quantValido == false) {
                                    cout << "\n\tQual quantidade desejada: ";
                                    cin >> quant_Agua;

                                    if (quant_Agua > estoque_Agua) {
                                        cout << "\n\tDesculpe, quantidade inserida acima do disponivel em estoque("<< estoque_Agua<<") , tente novamente. "<<endl;
                                    } else {
                                        quantValido = true;
                                    }
                                }
                                Agua_valor += Agua;
                                vAgua_final = Agua_valor * quant_Agua;
                                vAgua_finalTemp = Agua_valor * quant_Agua;
                                estoque_Agua -= quant_Agua;
    
                                cout << "\tQuantidade :" << quant_Agua << endl;
                                cout << "\tValor R$ " << vAgua_finalTemp <<" reais"<< endl;
                            }
                        }
                    }

                    if (opcao == 3) {
                        cout << "\n\tQual item deseja pedir : " << endl;
                        cout << "\t1- Doritos R$2,50" << endl;
                        cout << "\t2- Cheetos R$2,50" << endl;
                        cout << "\t3- Cebolitos R$2,50" << endl;
                        cout <<"\n\tOpcao: ";
                        cin >> salgadinhos;

                        

                        if (salgadinhos == 1) {
                            if(estoque_Dori <= 0) {
                                cout << "\n\tDesculpe estamos sem estoque desse item, aguarde reposição." << endl;

                            } else {

                                bool quantValido = false;

                                while (quantValido == false) {
                                    cout << "\n\tQual quantidade desejada: ";
                                    cin >> quant_Dori;

                                    if (quant_Dori > estoque_Dori) {
                                        cout << "\n\tDesculpe, quantidade inserida acima do disponivel em estoque("<< estoque_Dori <<") , tente novamente. "<<endl;
                                    } else {
                                        quantValido = true;
                                    }
                                }
                                Dori_valor += Doritos;
                                vDori_final = Dori_valor * quant_Dori;
                                vDori_finalTemp = Dori_valor * quant_Dori;
                                estoque_Dori -= quant_Dori;
    
                                cout << "\tQuantidade :" << quant_Dori << endl;
                                cout << "\tValor R$ " << vDori_finalTemp <<" reais"<< endl;
                            }
                        }

                        if (salgadinhos == 2) {
                            if(estoque_Chee <= 0) {
                                cout << "\n\tDesculpe estamos sem estoque desse item, aguarde reposição." << endl;

                            } else {

                                bool quantValido = false;

                                while (quantValido == false) {
                                    cout << "\n\tQual quantidade desejada: ";
                                    cin >> quant_Chee;

                                    if (quant_Chee > estoque_Chee) {
                                        cout << "\n\tDesculpe, quantidade inserida acima do disponivel em estoque("<< estoque_Chee <<") , tente novamente. "<<endl;
                                    } else {
                                        quantValido = true;
                                    }
                                }
                                Chee_valor += Cheetos;
                                vChee_final = Chee_valor * quant_Chee;
                                vChee_finalTemp = Chee_valor * quant_Chee;
                                estoque_Chee -= quant_Chee;
    
                                cout << "\tQuantidade :" << quant_Chee << endl;
                                cout << "\tValor R$ " << vChee_finalTemp <<" reais"<< endl;
                            }
                        }

                        if (salgadinhos == 3) {
                            if(estoque_Ceb <= 0) {
                                cout << "\n\tDesculpe estamos sem estoque desse item, aguarde reposição." << endl;

                            } else {
                                bool quantValido = false;

                                while (quantValido == false) {
                                    cout << "\n\tQual quantidade desejada: ";
                                    cin >> quant_Ceb;

                                    if (quant_Ceb > estoque_Ceb) {
                                        cout << "\n\tDesculpe, quantidade inserida acima do disponivel em estoque("<< estoque_Ceb <<") , tente novamente. "<<endl;
                                    } else {
                                        quantValido = true;
                                    }
                                }
                                Ceb_valor += Cebolitos;
                                vCeb_final = Ceb_valor * quant_Ceb;
                                vCeb_finalTemp = Ceb_valor * quant_Ceb;
                                estoque_Ceb -= quant_Ceb;
    
                                cout << "\tQuantidade :" << quant_Ceb << endl;
                                cout << "\tValor R$ " << vCeb_finalTemp <<" reais"<< endl;
                            }
                        }
                    }

                    opcao = 0;
                    snacks = 0;
                    bebidas = 0;
                    salgadinhos = 0;

                    cout << "\n\tDeseja fazer incluir mais algum produto?" << endl;
                    cout << "\n\t(s)sim ou (n)nao" << endl;
                    cout <<"\n\tOpcao: ";
                    cin >> op;

                    if (op == 'n' || op == 'N')
                    {
                        
                        v_total = vSuf_finalTemp + vkit_finalTemp + vFan_finalTemp + vCoca_finalTemp + vAgua_finalTemp + vSpr_finalTemp + vLar_finalTemp + vUva_finalTemp + vDori_finalTemp + vChee_finalTemp + vCeb_finalTemp;
                        v_totalfinal+= v_total;

                        cout << "\n\tValor total R$ " << v_total <<" reais"<< endl;
    
                        bool estaPago = false;

                        while (estaPago == false) {
                            cout << "\n\tInsira o valor para pagamento: ";
                            cin >> usuario;

                            cout << v_total;
                            cout << usuario;

                            if (v_total > usuario) {
                                cout <<"\n\tValor inserido insuficiente, favor inserir novamente: ";
                            } else {
                                estaPago = true;
                            }
                        }

                        troco = usuario - v_total;
                        
                        cout << "\n\tSeu troco : "<< troco <<" reais" << endl;
                        cout << "\n\tPor favor retire seu troco e o seu produto. Obrigado volte sempre !"<<endl;

                        vkit_finalTemp = 0; 
                        vAgua_finalTemp = 0; 
                        vSuf_finalTemp = 0; 
                        vCoca_finalTemp = 0;
                        vFan_finalTemp = 0;
                        vSpr_finalTemp = 0;
                        vLar_finalTemp = 0;
                        vUva_finalTemp = 0;
                        vDori_finalTemp = 0;
                        vChee_finalTemp = 0; 
                        vCeb_finalTemp = 0;

                    }
                    modo = 0;
                }

                break;
            
            cout << endl;

            case 2:
                cout << "\n\tBem vindo Administrador !" << endl;

                cout << "\n\tEscolha o que deseja fazer" << endl;
                cout << "\t1. Repor produtos" << endl;
                cout << "\t2. Listar inventario" << endl;
                cout << "\t3. Valor faturado" << endl;
                cout << "\t4. Valor que ainda pode ser faturado com o estoque atual" << endl;
                cout <<"\n\tOpcao: ";
                cin >> opcaoSelecionada;

                if (opcaoSelecionada == 1) {
                    /* ADICIONAR PRODUTOS */

                    bool estaAdicionando = true;
                    char continuarAqui = 'n';

                    while (estaAdicionando == true)
                    {

                        int codigoProdutoEscolhido = 0;
                        int quantidadeQueVaiSerAdicionada = 0;

                        cout << endl;
                        cout << "\n\t1. KitKat  " << endl;
                        cout << "\t2. Suflair " << endl;
                        cout << "\t3. Coca    " << endl;
                        cout << "\t4. Sprite  " << endl;
                        cout << "\t5. Fanta   " << endl;
                        cout << "\t6. Laranja " << endl;
                        cout << "\t7. Uva     " << endl;
                        cout << "\t8. Agua    " << endl;
                        cout << "\t9. Doritos " << endl;
                        cout << "\t10. Cheetos " << endl;
                        cout << "\t11. Cebolitos " << endl;
                        cout << endl;
                        cout << "\n\tDigite o codigo do produto que deseja adicionar: ";
                        cin >> codigoProdutoEscolhido;

                        switch (codigoProdutoEscolhido)
                        {
                        case 1:
                            cout << "\n\tQuantidade que deseja adicionar: ";
                            cin >> quantidadeQueVaiSerAdicionada;

                            estoque_kit += quantidadeQueVaiSerAdicionada;
                            break;

                        case 2:
                            cout << "\n\tQuantidade que deseja adicionar: ";
                            cin >> quantidadeQueVaiSerAdicionada;

                            estoque_Suf += quantidadeQueVaiSerAdicionada;
                            break;

                        case 3:
                            cout << "\n\tQuantidade que deseja adicionar: ";
                            cin >> quantidadeQueVaiSerAdicionada;

                            estoque_Coca += quantidadeQueVaiSerAdicionada;
                            break;

                        case 4:
                            cout << "\n\tQuantidade que deseja adicionar: ";
                            cin >> quantidadeQueVaiSerAdicionada;

                            estoque_Spr += quantidadeQueVaiSerAdicionada;
                            break;

                        case 5:
                            cout << "\n\tQuantidade que deseja adicionar: ";
                            cin >> quantidadeQueVaiSerAdicionada;

                            estoque_Fanta += quantidadeQueVaiSerAdicionada;
                            break;

                        case 6:
                            cout << "\n\tQuantidade que deseja adicionar: ";
                            cin >> quantidadeQueVaiSerAdicionada;

                            estoque_Lar += quantidadeQueVaiSerAdicionada;
                            break;

                        case 7:
                            cout << "\n\tQuantidade que deseja adicionar: ";
                            cin >> quantidadeQueVaiSerAdicionada;

                            estoque_Uva += quantidadeQueVaiSerAdicionada;
                            break;

                        case 8:
                            cout << "\n\tQuantidade que deseja adicionar: ";
                            cin >> quantidadeQueVaiSerAdicionada;

                            estoque_Agua += quantidadeQueVaiSerAdicionada;
                            break;

                        case 9:
                            cout << "\n\tQuantidade que deseja adicionar: ";
                            cin >> quantidadeQueVaiSerAdicionada;

                            estoque_Dori += quantidadeQueVaiSerAdicionada;
                            break;

                        case 10:
                            cout << "\n\tQuantidade que deseja adicionar: ";
                            cin >> quantidadeQueVaiSerAdicionada;

                            estoque_Chee += quantidadeQueVaiSerAdicionada;
                            break;

                        case 11:
                            cout << "\n\tQuantidade que deseja adicionar: ";
                            cin >> quantidadeQueVaiSerAdicionada;

                            estoque_Ceb += quantidadeQueVaiSerAdicionada;
                            break;
                        }

                        cout << "\n\tDeseja adicionar mais produto: (s)sim ou (n)nao: ";
                        cin >> continuarAqui;

                        if (continuarAqui == 'n' || continuarAqui == 'n')
                        {
                            estaAdicionando = false;
                        }
                    }
                }

                if (opcaoSelecionada == 2) {
                    /* LISTAR INVENTARIO */
                    cout << "\n\tPRODUTO   \t|\t"
                         << "QUANT." << endl;
                    cout << endl;
                    cout << "\ntKitKat    \t|\t"
                         << "  " << estoque_kit << endl;
                    cout << "\tSuflair   \t|\t"
                         << "  " << estoque_Suf << endl;
                    cout << "\tCoca      \t|\t"
                         << "  " << estoque_Coca << endl;
                    cout << "\tSprite    \t|\t"
                         << "  " << estoque_Spr << endl;
                    cout << "\tFanta     \t|\t"
                         << "  " << estoque_Fanta << endl;
                    cout << "\tLaranja   \t|\t"
                         << "  " << estoque_Lar << endl;
                    cout << "\tUva       \t|\t"
                         << "  " << estoque_Uva << endl;
                    cout << "\tAgua      \t|\t"
                         << "  " << estoque_Agua << endl;
                    cout << "\tDoritos   \t|\t"
                         << "  " << estoque_Dori << endl;
                    cout << "\tCheetos   \t|\t"
                         << "  " << estoque_Chee << endl;
                    cout << "\tCebolitos \t|\t"
                         << "  " << estoque_Ceb << endl;
                    cout << endl;
                }

                if (opcaoSelecionada == 3) {
                    /* VALOR FATURADO */
                    cout << "\n\tPRODUTOS\t|"
                         << " QUANT. VENDIDA"
                         << "|"
                         << "   Valor Total R$ " << endl;
                    cout << endl;
                    cout << "\n\tKitKat    \t|\t" << quant_kit << "  \t|\t"
                         << "  " << vkit_final << endl;
                    cout << "\tSuflair   \t|\t" << quant_Suf << "  \t|\t"
                         << "  " << vSuf_final << endl;
                    cout << "\tCoca      \t|\t" << quant_Coca << " \t|\t"
                         << "  " << vCoca_final << endl;
                    cout << "\tSprite    \t|\t" << quant_Spr << "  \t|\t"
                         << "  " << vSpr_final << endl;
                    cout << "\tFanta     \t|\t" << quant_Fanta << "\t|\t"
                         << "  " << vFan_final << endl;
                    cout << "\tLaranja   \t|\t" << quant_Lar << "  \t|\t"
                         << "  " << vLar_final << endl;
                    cout << "\tUva       \t|\t" << quant_Uva << "  \t|\t"
                         << "  " << vUva_final << endl;
                    cout << "\tAgua      \t|\t" << quant_Agua << " \t|\t"
                         << "  " << vAgua_final << endl;
                    cout << "\tDoritos   \t|\t" << quant_Dori << " \t|\t"
                         << "  " << vDori_final << endl;
                    cout << "\tCheetos   \t|\t" << quant_Chee << " \t|\t"
                         << "  " << vChee_final << endl;
                    cout << "\tCebolitos \t|\t" << quant_Ceb << "  \t|\t"
                         << "  " << vCeb_final << endl;
                    cout << endl;
                    cout << "\tValor Faturado R$: " << v_totalfinal << " reais " << endl;
                    cout << endl;
                }

                if (opcaoSelecionada == 4) {
                    /* AINDA PODE SER FATURADO*/
                    float valorTotalPrevisto = (estoque_kit * KitKat) + (estoque_Suf * Suflair) + (estoque_Coca * Coca) + (estoque_Spr * Sprite) + (estoque_Fanta * Fanta) + (estoque_Lar * Laranja) + (estoque_Uva * Uva) + (estoque_Agua * Agua) + (estoque_Dori * Doritos) + (estoque_Chee * Cheetos) + (estoque_Ceb * Cebolitos);

                    cout << "\n\tPRODUTO   \t|\t"
                         << "PREVISAO FATUR." << endl;
                    cout << "------------------------------------" << endl;
                    cout << endl;
                    cout << "\n\tKitKat    \t|\t"
                         << "  "
                         << "R$ " << (estoque_kit * KitKat) << endl;
                    cout << "\tSuflair   \t|\t"
                         << "  "
                         << "R$ " << (estoque_Suf * Suflair) << endl;
                    cout << "\tCoca      \t|\t"
                         << "  "
                         << "R$ " << (estoque_Coca * Coca) << endl;
                    cout << "\tSprite    \t|\t"
                         << "  "
                         << "R$ " << (estoque_Spr * Sprite) << endl;
                    cout << "\tFanta     \t|\t"
                         << "  "
                         << "R$ " << (estoque_Fanta * Fanta) << endl;
                    cout << "\tLaranja   \t|\t"
                         << "  "
                         << "R$ " << (estoque_Lar * Laranja) << endl;
                    cout << "\tUva       \t|\t"
                         << "  "
                         << "R$ " << (estoque_Uva * Uva) << endl;
                    cout << "\tAgua      \t|\t"
                         << "  "
                         << "R$ " << (estoque_Agua * Agua) << endl;
                    cout << "\tDoritos   \t|\t"
                         << "  "
                         << "R$ " << (estoque_Dori * Doritos) << endl;
                    cout << "\tCheetos   \t|\t"
                         << "  "
                         << "R$ " << (estoque_Chee * Cheetos) << endl;
                    cout << "\tCebolitos \t|\t"
                         << "  "
                         << "R$ " << (estoque_Ceb * Cebolitos) << endl;
                    cout << "------------------------------------" << endl;
                    cout << "\n\tTOTAL     \t|\t"
                         << "  "
                         << "R$ " << valorTotalPrevisto << endl;
                    cout << endl;
                }

                break;
        
            default:
                cout << "\n\tPor Favor insira uma opcao valida !";
                break;

        }
        //modo = 0;
        cout << "\n\tDeseja voltar para o menu inicial?" << endl;
        cout << "\n\t(s)sim ou (n)nao" << endl;
        cin >> op1;

    }
    return 0;
}
    
// troco está como inteiro - ok
// formatar relatorios - ok
// quantidade vendido esta errado - ok
// total faturado esta zerado - ok