void Ex4(int ordenacao[], int x) {
	int i;

	for (int i = 1; i < x; i++){
		if (ordenacao[i - 1] > ordenacao[i]){
			return 0;
		}
	}

	printf("ORDENADO");
	return 1;
}

int Ex5(int ordenacao[], int x){
	int i, j;

	for (int i = 0; i < x - 1; i++){
		for (int j = i; j < x - 1; j++){
			if (ordenacao[i] < ordenacao[j]){
				int aux = ordenacao[i];
				ordenacao[i] = ordenacao[j];
				ordenacao[j] = aux;
			}
		}
	}
	return ordenacao[];
}

int Ex6(int ordenacao[], int x){
	int novoNum, i, j;

	scanf("%d", novoNum);

	ordenacao[x + 1] = novoNum;

        for (int i = 0; i < x - 1; i++){
                for (int j = i; j < x - 1; j++){
                        if (ordenacao[i] < ordenacao[j]){
                                int aux = ordenacao[i];
                                ordenacao[i] = ordenacao[j];
                                ordenacao[j] = aux;
                        }
                }
        }
	return ordenacao[];
}

int Ex7(int ordenacao[], int x, num){
	int i;

	for(i = 0; i < x; i++){
		if(ordenacao[i] == num){
			return i;
		}
	}
	return -1;
}

int Ex9(){
	int ordenacao[8] = {72, 12, 62, 69, 27, 67, 41, 56, 33, 74};
	int i, j, k, count = 0;

	for (i = 2; i <= 8; i++){
		k = ordenacao[i];
		j=i-1;
		ordenacao[0] = k;

		while (k < ordenacao[j]){
			ordenacao[j+1] = ordenacao[j];
			j--;
			count++;
		}

		vet[j+1] = k;
	}
	printf("numero de copias = %d", count);
}

int Ex10(int *v, int inicio, int final){
	int esq, dir, pivo, aux;

	esq = inicio;
	dir = final;
	pivo = v[inicio];

	while(esq < dir){
		while(esq <= final && v[esq] <= pivo){
			esq++;
		}

		while(dir >= 0 && v[dir] > pivo){
			dir--;
		}

		if(esq < dir){
			aux = v[esq];
			v[esq] = v[dir];
			v[dir] = aux;
		}
	}

	v[inicio] = v[dir];
	v[dir] = pivo;
}

void Ex12A(int ordenacao[], int a, int b, int c){
	int *w;
	int i = a, j = b, k = 0, x;

	w = malloc((c-a)* sizeof(int));

	while(i < b && j < c) {

		if(ordenacao[i] <= ordenacao[j]){
			w[k++] = ordenacao[i++];
		}else{
			w[k++] = ordenacao[j++];
		}

		for(x = 0; x != 15; x++){
			printf("%d", ordenacao[x]);
		}

	}

	while(i < b){
		w[k++] = ordenacao[i++];
		for(x = 0; x != 15; x++){
                        printf("%d", ordenacao[x]);
                }
	}

	while(j < c){
		w[k++] = ordenacao[j++];
		for(x = 0; x != 15; x++){
                        printf("%d", ordenacao[x]);
                }
	}

	for(i = a; i < c; ++i){
		ordenacao[i] = w[i-a];
		for(x = 0; x != 15; x++){
                        printf("%d", ordenacao[x]);
                }
	}

	free(w);
}

void Ex12B(int vetor[10], int inicio, int fim){
	int x, pivo, aux, i, j, meio;
	i = inicio;
	j = fim;

	meio = (int)((i + j)/2);
	pivo = vetor[meio];

	do{
		while(vetor[i] < pivo){
			i = i + 1;
		}
		while(vetor[j] > pivo){
			j = j - 1;
		}
		if(i <= j){
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i = i + 1;
			j = j - 1;
		}
		for(x = 0; x != 15; x++){
                        printf("%d", ordenacao[x]);
                }
	}while(j > i);

	if(inicio < j){
		Quick(vetor, inicio, j);
	}
	if(i < fim){
		Quick(vetor, i, fim);
	}
}

void Ex12C(int a, int ordenacao[]){
	int i, j, aux;
	for(int i = 1; i < a; ++k){
		int j = i+1;
		while(j > 1 && ordenacao[j/2] < ordenacao[j]){
			aux = ordenacao[j/2];
			ordenacao[j/2] = ordenacao[j];
			ordenacao[j] = aux;
			j /= 2;
			for(x = 0; x != 15; x++){
	                        printf("%d", ordenacao[x]);
        	        }
		}
	}
}

int Ex14(int x[], int n){
	int count[n], i, j, menor = x[0];

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(menor > x[j]){
				menor = x[j];
			}
		}
		count[i] = menor;
	}
}

void Ex16_1(int ordenacao[], int a, int b, int c){
        int *w;
        int i = a, j = b, k = 0, x, comp_troc = 0;

        w = malloc((c-a)* sizeof(int));

        while(i < b && j < c) {

                if(ordenacao[i] <= ordenacao[j]){
                        w[k++] = ordenacao[i++];
                }else{
                        w[k++] = ordenacao[j++];
                }

                for(x = 0; x != 15; x++){
                        printf("%d", ordenacao[x]);
                }
		comp_troc++;
        }

        while(i < b){
                w[k++] = ordenacao[i++];
                for(x = 0; x != 15; x++){
                        printf("%d", ordenacao[x]);
                }
        }

        while(j < c){
                w[k++] = ordenacao[j++];
                for(x = 0; x != 15; x++){
                        printf("%d", ordenacao[x]);
                }
        }

        for(i = a; i < c; ++i){
                ordenacao[i] = w[i-a];
        }

	printf("%d", comp_troc);

        free(w);
}

void Ex16_2(int vetor[10], int inicio, int fim){
        int x, pivo, aux, i, j, meio, comp_troc = 0;
        i = inicio;
        j = fim;

        meio = (int)((i + j)/2);
        pivo = vetor[meio];

        do{
                while(vetor[i] < pivo){
                        i = i + 1;
                }
                while(vetor[j] > pivo){
                        j = j - 1;
                }
                if(i <= j){
                        aux = vetor[i];
                        vetor[i] = vetor[j];
                        vetor[j] = aux;
                        i = i + 1;
                        j = j - 1;
                }
	comp_troc++;
        }while(j > i);

        if(inicio < j){
                Quick(vetor, inicio, j);
        }
        if(i < fim){
                Quick(vetor, i, fim);
        }
	printf("%d", comp_troc);
}

void Ex17(int ordenacao, int n){
	int i, j, x;

	for(i = 2; i <= n; i++){
		x = ordenacao[i];
		j = i - 1;
		ordenacao[0] = x;
		while(Ex17_1){
        		ordenacao[j+1] = ordenacao[j];
			j--;
		}
		ordenacao[j+1] = x;
	}
}

int Ex17_1(char a[100], char b[100]){
	int tam = 0, i = 0, j = 0, cont1 = 0, cont2 = 0, z = 0;

	tam=strlen(a);

	for(i = 0; i < tam; i++){
		j++;
		if(a[j] > b[j]){
			cont1++;
		}
		if(a[j] < b[j]){
			cont2++;
		}
	}

	if(cont1 > cont2){
		return 0;
	}else{
        	return 1;
	}
}

int Ex18(char str[]){
	int n, i, j;

	n = strlen(str);

        char count[n], menor = str[0];

        for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                        if(menor > str[j]){
                                menor = str[j];
                        }
                }
                count[i] = menor;
        }
}

void Ex19(int n){
	int Tam = 50, Aux, aux2;
	char str[100][n];

	for (Aux = 0; Aux < n; Aux++){
		gets(str[][Aux]);
	}

	Ex19_1(str, n);
}

void Ex19_1(int *ordenacao, int n){
	char Menor, Troca;
	int Tam = 50, Aux, Temp;

	for(Aux = 0; Aux < Tam - 1; Aux++){
		Menor = ordenacao[Aux];

		for(Temp = Aux + 1; Temp < Tam; Temp++){
			if(ordenacao[Temp] < ordenacao[Tam]){
				Menor = ordenacao[Tam;
			}
		}

		if(Menor != ordenacao[Aux]){
			Troca = ordenacao[Aux];
			ordenacao[Aux] = ordenacao[Menor];
			ordenacao[Menor] = Troca;
        }
    }
}

char Ex20(int ordenacao[], int p, int r) {
	char c = ordenacao[r], t;
	int j = p, k;
	for(k = p; k < r; k++)
		if(ordenacao[k] >= c){
			t = ordenacao[j];
			ordenacao[j] = ordenacao[k];
			ordenacao[k] = t;
			++j;
		}
		t = ordenacao[j];
		ordenacao[j] = ordenacao[r];
		ordenacao[r] = t;
	}
}

int Ex21(struct pessoa[], int n){
	int i, j, ordemNome[n], k = 0;
	char aux[30], nomeOrdenado[30][n];

        for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                        if(aux[][j] > pessoa[j].Nome){
                                aux = pessoa[j].Nome;
				k++;
                        }
                }
                nomeOrdenado[][i] = aux;
		ordem[i] = k;
        }

	int matriculaOrdenada[n], ordemMatricula[n], menor = pessoa[0].Matricula;

	k = 0;

        for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                        if(menor > pessoa[j].Matricula){
                                menor = pessoa[j].Matricula;
				k++;
                        }
                }
                matriculaOrdenada[i] = menor;
		ordemMatricula[i] = k;
        }

        int NotaOrdenada[n], ordemNota[n], menor2 = pessoa[0].Nota;

        k = 0;

        for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                        if(menor2 > pessoa[j].Nota){
                                menor2 = pessoa[j].Nota;
                                k++;
                        }
                }
                notaOrdenada[i] = menor2;
                ordemNota[i] = k;
        }
}
