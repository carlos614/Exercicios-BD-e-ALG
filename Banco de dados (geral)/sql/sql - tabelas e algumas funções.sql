-- MySQL Script generated by MySQL Workbench
-- Fri Nov 17 22:06:34 2017
-- Model: New Model    Version: 1.0
-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema revisao
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema revisao
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `revisao` DEFAULT CHARACTER SET utf8 ;
USE `revisao` ;

-- -----------------------------------------------------
-- Table `revisao`.`produto`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `revisao`.`produto` (
  `codproduto` INT NOT NULL,
  `nomeprod` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`codproduto`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `revisao`.`transportadora`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `revisao`.`transportadora` (
  `codtran` INT NOT NULL,
  `nometra` VARCHAR(45) NULL,
  `cnpjtra` VARCHAR(45) NULL,
  PRIMARY KEY (`codtran`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `revisao`.`pedido`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `revisao`.`pedido` (
  `codped` INT NOT NULL,
  `qtde` VARCHAR(45) NOT NULL,
  `dataped` VARCHAR(45) NOT NULL,
  `produto_codproduto` INT NOT NULL,
  `transportadora_codtran` INT NOT NULL,
  PRIMARY KEY (`codped`, `produto_codproduto`, `transportadora_codtran`),
  INDEX `fk_pedido_produto1_idx` (`produto_codproduto` ASC),
  INDEX `fk_pedido_transportadora1_idx` (`transportadora_codtran` ASC),
  CONSTRAINT `fk_pedido_produto1`
    FOREIGN KEY (`produto_codproduto`)
    REFERENCES `revisao`.`produto` (`codproduto`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_pedido_transportadora1`
    FOREIGN KEY (`transportadora_codtran`)
    REFERENCES `revisao`.`transportadora` (`codtran`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `revisao`.`codicaopgto`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `revisao`.`codicaopgto` (
  `codpgto` INT NOT NULL,
  `diapgto` VARCHAR(45) NULL,
  `nomepgto` VARCHAR(45) NULL,
  PRIMARY KEY (`codpgto`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `revisao`.`cliente`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `revisao`.`cliente` (
  `codcli` INT NOT NULL,
  `nomecli` VARCHAR(45) NOT NULL,
  `pedido_codped` INT NOT NULL,
  `codicaopgto_codpgto` INT NOT NULL,
  PRIMARY KEY (`codcli`, `pedido_codped`, `codicaopgto_codpgto`),
  INDEX `fk_cliente_pedido_idx` (`pedido_codped` ASC),
  INDEX `fk_cliente_codicaopgto1_idx` (`codicaopgto_codpgto` ASC),
  CONSTRAINT `fk_cliente_pedido`
    FOREIGN KEY (`pedido_codped`)
    REFERENCES `revisao`.`pedido` (`codped`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_cliente_codicaopgto1`
    FOREIGN KEY (`codicaopgto_codpgto`)
    REFERENCES `revisao`.`codicaopgto` (`codpgto`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
