# --- Variáveis ---

# Define o compilador C++
CXX = g++

# Define as flags de compilação
# -std=c++11: Garante o padrão C++11 (necessário para std::vector, etc.)
# -Wall -Wextra: Ativa todos os warnings úteis (boa prática)
# -g: Inclui símbolos de depuração (para usar com gdb)
CXXFLAGS = -std=c++11 -Wall -Wextra -g

# Define o nome do executável final
EXEC = programa

# Lista de todos os arquivos fonte (.cpp)
SRCS = main.cpp \
       Veiculo.cpp \
       Carro.cpp \
       Moto.cpp \
       Caminhao.cpp \
       Frota.cpp

# Lista de todos os arquivos de cabeçalho (.hpp)
DEPS = Veiculo.hpp \
       Carro.hpp \
       Moto.hpp \
       Caminhao.hpp \
       Frota.hpp

# Gera automaticamente a lista de arquivos objeto (.o) a partir dos fontes (.cpp)
OBJS = $(SRCS:.cpp=.o)

# --- Regras ---

# Regra padrão (o que é executado ao digitar apenas "make")
# .PHONY: all significa que "all" não é um arquivo, mas sim um nome de regra.
.PHONY: all
all: $(EXEC)

# Regra de Linkagem:
# Cria o executável final ($(EXEC)) a partir de todos os arquivos objeto ($(OBJS))
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)

# Regra de Compilação Genérica:
# Ensina ao make como transformar qualquer arquivo .cpp em .o
# $< é o nome do primeiro pré-requisito (o .cpp)
# $@ é o nome do alvo (o .o)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# --- Dependências de Cabeçalho ---
# Estas regras garantem que se um arquivo .hpp for alterado,
# os arquivos .cpp que o incluem serão recompilados.

# main.o e Frota.o dependem de todos os cabeçalhos
main.o: main.cpp $(DEPS)
Frota.o: Frota.cpp $(DEPS)

# Veiculo.o depende apenas de seu próprio cabeçalho
Veiculo.o: Veiculo.cpp Veiculo.hpp

# As classes derivadas dependem de seu .hpp e do .hpp da classe base (Veiculo.hpp)
Carro.o: Carro.cpp Carro.hpp Veiculo.hpp
Moto.o: Moto.cpp Moto.hpp Veiculo.hpp
Caminhao.o: Caminhao.cpp Caminhao.hpp Veiculo.hpp

# Regra "clean":
# Remove todos os arquivos gerados (objetos e o executável)
.PHONY: clean
clean:
	rm -f $(OBJS) $(EXEC)

# Regra "run" (opcional):
# Compila (se necessário) e depois executa o programa
.PHONY: run
run: all
	./$(EXEC)