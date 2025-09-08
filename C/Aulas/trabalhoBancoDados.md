```mermaid
erDiagram
    Pessoa {
        VARCHAR(11) CPF PK "Chave Primária"
        VARCHAR(20) RG
        VARCHAR(255) Nome
        VARCHAR(255) Rua
        VARCHAR(10) Numero
        VARCHAR(100) Bairro
    }

    Medico_Veterinario {
        VARCHAR(11) CPF PK, FK "Chave Primária e Estrangeira"
        VARCHAR(15) CRMV "Único"
    }

    Animal {
        BIGINT Identificador PK "Chave Primária (Auto-incremento)"
        VARCHAR(11) tutor_cpf FK "Chave Estrangeira"
        VARCHAR(100) Nome
        VARCHAR(50) Especie
        DATE Data_Nascimento
    }

    Vacinacao {
        VARCHAR(11) medico_cpf PK, FK
        BIGINT animal_id PK, FK
        DATETIME data_vacinacao PK
        TEXT observacoes
    }

    %% Definição dos Relacionamentos
    Pessoa ||--o{ Animal : "possui"
    Pessoa <|-- Medico_Veterinario : "é um(a)"
    Medico_Veterinario ||--o{ Vacinacao : "aplica"
    Animal ||--o{ Vacinacao : "recebe"
    ```