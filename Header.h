typedef struct Dependente dependente;
struct Dependente
{
    char nome[50];
    int codigo;
    char dataDeNascimento[11];
    char tipo;
    dependente *anterior;
    dependente *proximo;
} Dependente;

typedef struct Cliente cliente;
struct Cliente
{
    char nome[50];
    int codigo;
    char dataDeNascimento[11];
    char tipoDeCartao;
    float limiteEmprestimo;
    int quantidadeDeDependentes;
    cliente *proximo;
    dependente *listaDependentes;

} Cliente;

void cadastrarNome(char *nome);
char *cadastrarNascimento(char *dataNascStruct, int minIdade);
void cadastrarTipoCartao(cliente *cliente);
void cadastrarTipoDependente(dependente *dependente);
cliente *subMenuA(cliente *listacliente);
void subMenuB();
void subMenuC();
void cadastrarLimite(float *limite, int idade);
void cadastrarQtdDependente(cliente *cliente);
int calcularIdade();
int verificaData(char *data);
void imprimirLista(cliente *lista);
cliente *cadastrarCliente(cliente *listaCliente);
dependente *cadastrarDependentes(dependente *fimLista, cliente *cliente);
cliente *buscarRegistro(cliente *atual, int cod);
int procurarCodigo();
void exibirTodosClientes(cliente *listaCliente, int count);
void exibirClienteEspecifico(cliente *listaCliente, int codigo);
void exibirDependentes(dependente *listaDependente);
void printarValoresCliente(cliente *cliente);

#define RAND rand() % 1000
#define RAND_INCREMENTAL(a) (a + 1)
#define MAX_DEPENDETES (2)
#define MAX_IDADE (100)
#define MIN_IDADE_CLIENTE (18)
#define MIN_IDADE_DEPENDENTE (0)